/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_change_key.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 20:32:00 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 10:30:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_change_key(t_bheap *heap, void *key, void *new_key)
{
	int			index;
	t_kvpair	*pair;

	if (heap && (index = ef_bheap_index(heap, key)) != -1 &&
			heap->cmp_key(new_key, key) < 0)
	{
		pair = (t_kvpair *)ef_darray_get(heap->array, index + 1);
		pair->key = new_key;
		ef_bheap_heapify_up(heap, index);
	}
}

