/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_in_order_traverse.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 13:51:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 14:42:35 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_in_order_traverse(t_ntree *tree, f_mfy mfy,
									t_traverse_flag part)
{
	t_ntree	*subtree;

	if (!tree)
		return ;
	if (tree->children)
		ef_ntree_in_order_traverse(tree->children, mfy, part);
	switch (part)
	{
		case LEAF:
			if (!tree->children)
				tree->data = mfy(tree->data);
			break ;
		case NON_LEAF:
			if (tree->children)
				tree->data = mfy(tree->data);
			break ;
		case ALL:
			tree->data = mfy(tree->data);
			break ;
	}
	if (tree->children)
		for (subtree = tree->children->next; subtree; subtree = subtree->next)
			ef_ntree_in_order_traverse(subtree, mfy, part);
}
