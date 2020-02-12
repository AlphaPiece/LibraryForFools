/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsqz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 12:43:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/01 12:47:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strsqz(char s[], char c)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (s[++i])
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
