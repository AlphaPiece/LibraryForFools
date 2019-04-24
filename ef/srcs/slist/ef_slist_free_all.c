/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_free_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:53:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/22 22:54:54 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_slist_free_data(t_slist *list, void (*del)(void *))
{
	t_slist	*next;

	while (list)
	{
		next = list->next;
		del(list->data);
		ef_slist_free_node(list);
		list = next;
	}
}
