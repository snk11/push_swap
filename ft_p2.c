/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:10:33 by syusof            #+#    #+#             */
/*   Updated: 2016/11/15 16:22:36 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_p2(t_lst ***lsta, int ac, char **av)
{
	if (ft_checkint(av[ac - 1]) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if(ft_parse2(&lsta,av[ac - 1]) == 0)
		return (0);
	**lsta = ft_reverse_lst(**lsta);
	return (1);
}
