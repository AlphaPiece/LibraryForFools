/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmapget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:04:39 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:19:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

char	*ft_hmapget(t_hmap *hmap, char *key)
{
	t_pair	*pair;

	pair = ft_hmapsearch(hmap, key);
	if (pair)
		return (pair->val);
	return (NULL);
}