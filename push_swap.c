/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2016/11/14 21:34:13 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"






#include <stdio.h>
int		main(int ac, char **av)
{
	t_lst	**lsta;
	t_lst	**lstop;

	lsta = (t_lst**)malloc(sizeof(t_lst*));
	lstop = (t_lst**)malloc(sizeof(t_lst*));
	*lsta = NULL;
	*lstop = NULL;
	if (ac < 2)
	{
		return (1);
	}
	if (ac == 2)
	{
		if(ft_parse1(&lsta,av[ac - 1]) == 0)
			return (0);
		*lsta = ft_reverse_lst(*lsta);
	}
	else if (ac > 2)
	{
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
	}
		if(ft_comptelem(*lsta) == 2)
		{
			if(((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
			{
				swap4(&lsta);
				ft_lstop_add_down0(&lstop, 1);
//				write(1,"sa\n",3);
			}
		}

		if(ft_comptelem(*lsta) > 2)
			ft_quicksort(&lsta,&lstop);
		//	ft_mergesort(&lsta);
		//	ft_bublesort(&lsta);
		//	ft_insertionsort(&lsta);
		/*
		while(*lsta)
		{
			ft_putnbr(((t_numb*)(*lsta)->content)->val);
			ft_putstr(" ");
			(*lsta) = (*lsta)->next;
		}
		printf("\n");
		*/
		if(*lstop)
			ft_checkdel_op(&lstop);
		if(*lstop)
			ft_printlst(*lstop);
		/*
		while(42)
		{
		}
		*/
	return (0);
}
