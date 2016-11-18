/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 11:53:11 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 19:33:53 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_checkint(char *s)
{
	char	*s1;

	s1 = NULL;
	if (ft_checkdigit(s) == 0)
		return (0);
	while (*s && (*s == ' ' || *s == '\t'))
		s++;
	if(*s)
	{
		s1 = s;
		if (*s1 == '-' || *s1 == '+')
			return (ft_checkint_p1(s, s1));
		else if (ft_strlen_isdigit(s) == 10)
			return (ft_checkint_p2(s, s1));
		else if (ft_strlen_isdigit(s) > 10)
			return (0);
		return (1);
	}
	return (0);
}

int		ft_checkint_p1(char *s, char *s1)
{
	if (ft_strlen_isdigit(s) == 11)
	{
		if (*s1 == '-')
			return (ft_checkint_p2_p1(s, s1));
		else if (*s1 == '+')
			return (ft_checkint_p2_p2(s, s1));
	}
	else if (ft_strlen_isdigit(s) > 11)
		return (0);
	return (1);
}

int		ft_checkint_p2_p1(char *s, char *s1)
{
	s1++;
	if (*s1 == '2')
		return (ft_checkint_p2_p1_p1(s, s1));
	else if (*s1 > '2')
		return (0);
	return (1);
}

int		ft_checkint_p2_p1_p1(char *s, char *s1)
{
	s1++;
	if (*s1 == '1')
		return (ft_checkint_p2_p1_p4(s, s1));
	else if (*s1 > '1')
		return (0);
	return (1);
}

int		ft_checkint_p2_p1_p4(char *s, char *s1)
{
	s1++;
	if (*s1 == '4')
		return (ft_checkint_p2_p1_p7(s, s1));
	else if (*s1 > '4')
		return (0);
	return (1);
}
