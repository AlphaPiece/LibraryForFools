/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 11:09:33 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 11:30:36 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

/*
** z: the starting node
** y: the uncle of z
*/

static void	fix_up(t_rbtree *tree, t_rbnode *z)
{
	t_rbnode	*y;

	while (z->parent->color == R)
		if (z->parent == z->parent->parent->left)
		{
			y = z->parent->parent->right;
			if (y->color == R)
			{
				z->parent->color = y->color = B;
				z->parent->parent->color = R;
				z = z->parent->parent;
			}
			else
			{
				if (z == z->parent->right)
					ef_rbnode_left_rotate(tree, (z = z->parent));
				z->parent->color = B;
				z->parent->parent->color = R;
				ef_rbnode_right_rotate(tree, z->parent->parent);
			}
		}
		else
		{
			y = z->parent->parent->left;
			if (y->color == R)
			{
				z->parent->color = y->color = B;
				z->parent->parent->color = R;
				z = z->parent->parent;
			}
			else
			{
				if (z == z->parent->left)
					ef_rbnode_right_rotate(tree, (z = z->parent));
				z->parent->color = B;
				z->parent->parent->color = R;
				ef_rbnode_left_rotate(tree, z->parent->parent);
			}
		}
	tree->root->color = B;
}

/*
** z: the node getting inserted
** y: the node that is going to be the parent of z
** x: the node used to travel up and down
*/

void		ef_rbtree_insert(t_rbtree *tree, t_rbnode *z)
{
	t_rbnode	*x, *y;

	if (!tree || !z || z == tree->nil)
		return ;
	y = tree->nil;
	x = tree->root;
	while (x != tree->nil)
	{
		y = x;
		if (tree->cmp_key(z->key, x->key) < 0)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;
	if (y == tree->nil)
		tree->root = z;
	else if (tree->cmp_key(z->key, y->key) < 0)
		y->left = z;
	else
		y->right = z;
	fix_up(tree, z);
	tree->size++;
}
