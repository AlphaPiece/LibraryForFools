/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:29:30 by zwang             #+#    #+#             */
/*   Updated: 2018/11/02 11:22:09 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	long		*ldst;
	const long	*lsrc;
	char		*cdst;
	const char	*csrc;

	ldst = dst;
	lsrc = src;
	while (n >= sizeof(long))
	{
		*ldst++ = *lsrc++;
		n -= sizeof(long);
	}
	if (n != 0)
	{
		cdst = (void *)ldst;
		csrc = (void *)lsrc;
		while (n-- != 0)
			*cdst++ = *csrc++;
	}
	return (dst);
}
