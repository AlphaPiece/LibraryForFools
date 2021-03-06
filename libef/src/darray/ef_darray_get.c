/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 13:16:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 21:05:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

t_value	ef_darray_get(t_darray *array, int index)
{
	if (0 <= index && index < ef_darray_length(array))
		switch (ef_darray_elem_size(array))
		{
			case BIT8:
				return (((uint8_t *)(array->data))[index]);
			case BIT16:
				return (((uint16_t *)(array->data))[index]);
			case BIT32:
				return (((uint32_t *)(array->data))[index]);
			case BIT64:
				return (((uint64_t *)(array->data))[index]);
		}
	return (0);
}
