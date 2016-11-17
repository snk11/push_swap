/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:39:00 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 14:37:35 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_p5(int ac, char **av)
{
	if (ft_checkint(av[ac - 1]) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
