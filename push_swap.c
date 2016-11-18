/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 20:31:22 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_lst	**lsta;
	t_lst	**lstop;

	ft_p6(&lsta, &lstop);
	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		if (ft_p5(ac, av) == 0)
			return (0);
		if (ft_parse1(&lsta, av[ac - 1]) == 0)
			return (0);
		if(*lsta)
			*lsta = ft_reverse_lst(&lsta);
	}
	else if (ac > 2)
	{
		if (ft_p4(&lsta, ac, av) == 0)
			return (0);
	}
	ft_p3(&lsta, &lstop);
	if (ft_comptelem(*lsta) > 2)
		ft_quicksort(&lsta, &lstop);
	ft_p7(&lstop);
	return (0);
}
