/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comparestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:42:31 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 17:12:07 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_comparestr(char *line, char *s)
{
	while (*line && (*line == ' ' || *line == '\t'))
		line++;
	while (*line && *s)
	{
		if (*line != *s)
			return (0);
		line++;
		s++;
	}
	if (*s)
		return (0);
	while (*line)
	{
		if (*line != ' ' && *line != '\t')
			return (0);
		line++;
	}
	return (1);
}
