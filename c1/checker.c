/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 14:14:49 by syusof            #+#    #+#             */
/*   Updated: 2016/11/19 10:12:28 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_lst	**lsta;
	t_lst	*lstb;
	t_read	r;
	int		i;

	if (ft_checker_p1(&lsta, &lstb, &r) == 0)
		return (0);
	if (ft_checkentryc(ac, av) == 0)
		return (0);
//	if (ac < 2)
//		return (1);
	i = 2;
	while (i <= ac)
	{
		if (ft_parse1c(&lsta, av[i - 1]) == 0)
			return (0);
		i++;
	}
	if(*lsta)
		*lsta = ft_reverse_lst(&lsta);
	if (ft_checker_p2(&lsta, &lstb, &r) == 0)
		return (0);
	return (1);
}
