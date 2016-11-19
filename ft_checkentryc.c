/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkentryc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:15:45 by syusof            #+#    #+#             */
/*   Updated: 2016/11/19 10:29:26 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_checkentryc(int ac, char **av)
{
	while (ac >= 2)
	{
		if (ft_checkspacestring(av[ac - 1]) == 1)
		{
			if (ft_checkint(av[ac - 1]) == 0)
			{
				write(2, "Error\n", 6);
				return (0);
			}
		}
		ac--;
	}
	return (1);
}
