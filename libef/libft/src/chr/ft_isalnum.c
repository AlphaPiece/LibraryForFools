/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:36:08 by zwang             #+#    #+#             */
/*   Updated: 2020/02/05 07:41:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chr.h"

t_bool	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
