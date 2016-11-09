/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2016/11/09 13:52:21 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_lst	**lsta;

	lsta = (t_lst**)malloc(sizeof(t_lst*));
	*lsta = NULL;
	if (ac <= 2)
	{
		write(2, "Error\n", 6);
		write(2, "trror\n", 6);
		return (0);
	}
	while (ac >= 2)
	{
		if (ft_checkint(av[ac - 1]) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		else
		{
			if (ft_p1(&lsta, ac, av) == 0)
				return (0);
		}
		ac--;
	}
	if(ft_comptelem(*lsta) == 2)
	{
		if(((t_numb*)(*lsta)->content)->val < ((t_numb*)((*lsta)->next)->content)->val)
		{
			swap4(&lsta);
			write(1,"sa\n",3);
		}
	}

	ft_quicksort(&lsta);
//	ft_mergesort(&lsta);
//	ft_bublesort(&lsta);
//	ft_insertionsort(&lsta);
	
	ft_printlst(*lsta);
	return (0);
}
