/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 14:14:49 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 17:09:23 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_lst	**lsta;
	t_lst	*lstb;
	t_read	r;

	if (ft_checker_p1(&lsta, &lstb, &r) == 0)
		return (0);
	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		if (ft_p5c(ac, av) == 0)
			return (0);
		if (ft_parse1c(&lsta, av[ac - 1]) == 0)
			return (0);
		*lsta = ft_reverse_lst(&lsta);
	}
	else if (ac > 2)
	{
		if (ft_p4c(&lsta, ac, av) == 0)
			return (0);
	}
	if (ft_checker_p2(&lsta, &lstb, &r) == 0)
		return (0);
	return (1);
}
