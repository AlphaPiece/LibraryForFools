/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:15:40 by zwang             #+#    #+#             */
/*   Updated: 2018/09/24 12:46:54 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while ((s1[i++] = s2[j++]))
		;
	return (s1);
}
