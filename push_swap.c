/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2016/11/22 15:04:02 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_lst		**lsta;
	t_lst		**lstop;
	t_option	option;

	ft_init(&option, ac, av);
	if (ft_p6(&lsta, &lstop, &option) == 0)
		return (0);
	if (ac < 2)
		return (1);
	option.i = 2;
	while (option.i <= ac)
	{
		if (ft_parse1(&lsta, av[option.i - 1]) == 0)
			return (0);
		option.i++;
	}
	if (*lsta)
		*lsta = ft_reverse_lst(&lsta);
	ft_p3(&lsta, &lstop);
	if (ft_comptelem(*lsta) > 2)
		ft_quicksort(&lsta, &lstop);
	ft_p7(&lstop, &lsta, &option);
	return (0);
}
