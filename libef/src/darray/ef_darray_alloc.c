/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:21:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/12 09:30:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

t_darray	*ef_darray_alloc(size_t elem_size, int length)
{
	t_darray	*array;
	size_t		array_size;

	array_size = MAX(length * elem_size, DARRAY_LEN * elem_size);
	if (!(array = (t_darray *)malloc(sizeof(t_darray))) ||
			!(array->data = malloc(array_size)))
	{
		perror("malloc");
		exit(1);
	}
	return (array);
}
