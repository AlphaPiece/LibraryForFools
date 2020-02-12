/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:00:20 by zwang             #+#    #+#             */
/*   Updated: 2019/05/23 17:49:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fio.h"

void	ft_putlstr(const char *s, unsigned int start, size_t len)
{
	ft_dputlstr(1, s, start, len);
}
