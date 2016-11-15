/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknothing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:11:53 by syusof            #+#    #+#             */
/*   Updated: 2016/11/14 21:19:19 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_checknothing(char *line)
{
	while (*line)
	{
		if(*line != ' ' && *line != '\t')
			return (0);
		line++;
	}
	return (1);
}