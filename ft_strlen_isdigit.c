/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_isdigit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 22:00:30 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:36:28 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_strlen_isdigit(char *s)
{
	int		i;

	i = 0;
	if (*s && *(s + 1) && (*s == '-' || *s == '+') && ft_isdigit(*(s + 1)))
	{
		s++;
		i++;
	}
	while (*s && ft_isdigit(*s))
	{
		s++;
		i++;
	}
	return (i);
}
