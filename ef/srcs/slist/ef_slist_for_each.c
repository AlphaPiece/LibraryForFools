/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_for_each.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 21:35:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 22:12:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_slist_for_each(t_slist *list, f_mfy mfy)
{
	t_slist	*node;

	for (node = list; node; node = node->next)
		node->data = mfy(node->data);
}