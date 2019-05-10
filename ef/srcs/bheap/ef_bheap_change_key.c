/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_change_key.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 20:32:00 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 22:46:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_change_key(t_bheap *heap, int index, void *new_key)
{
	t_kvpair	*pair;

	if (heap && ef_bheap_size(heap) > 0 &&
			1 <= index && index <= ef_bheap_size(heap))
	{
		if (heap->heap_type == MIN_HEAP)
		{
			pair = (t_kvpair *)ef_darray_get(heap->array, index);
			if (heap->cmp_key(new_key, pair->key) < 0)
			{
				pair->key = new_key;
				ef_bheap_heapify_up(heap, index);
			}
		}
		else
		{
			pair = (t_kvpair *)ef_darray_get(heap->array, index);
			if (heap->cmp_key(new_key, pair->key) > 0)
			{
				pair->key = new_key;
				ef_bheap_heapify_up(heap, index);
			}
		}
	}
}

