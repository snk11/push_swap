/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ustoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 07:42:27 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 18:33:00 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countdigit(int n)
{
	int		i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void		itoa_pos(char *str, int n, int i)
{
	while (i > 0)
	{
		str[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
}

char			*ft_ustoa(unsigned short n)
{
	char	*str;
	int		i;

	i = ft_countdigit((int)n);
	str = ft_strnew(i);
	itoa_pos(str, (int)n, i);
	return (str);
}
