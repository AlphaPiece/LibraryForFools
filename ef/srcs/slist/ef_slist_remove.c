/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:48:46 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/22 22:48:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_remove(t_slist *list, void *data)
{
	t_slist	*origin;
	t_slist	*node;
	t_slist	*tmp;

	node = origin = ef_slist_alloc();
	origin->next = list;
	while (node->next && node->next->data != data)
		node = node->next;
	if (node->next)
	{
		tmp = node->next;
		node->next = tmp->next;
		ef_slist_free_node(tmp);
	}
	node = origin->next;
	ef_slist_free_node(origin);
	return (node);
}