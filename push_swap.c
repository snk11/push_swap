/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2016/11/04 20:25:17 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


#include <stdio.h>

int		main(int ac,char **av)
{
	t_lst	**lsta;
	t_lst	**lst1;
	t_lst	*lstmp;
	t_numb	*e;

	lsta = (t_lst**)malloc(sizeof(t_lst*));
	lst1 = (t_lst**)malloc(sizeof(t_lst*));
	*lsta = NULL;
	*lst1 = NULL;
	lstmp = NULL;
	e = NULL;

	if (ac <= 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (ac >= 2)
	{
		if(ft_checkint(av[ac - 1]) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		else
		{
			if (!(e = (t_numb*)malloc(sizeof(t_numb))))
				return (0);
			e->val = ft_atoi(av[ac - 1]);
			if (ft_checkdouble(*lsta,e->val) == 0)
			{
				write(2, "Error\n", 6);
				return (0);
			}
			lstmp = create_lst(e);
			free(e);
			e = NULL;
			lst_add2(lsta, lstmp);
			ft_freelst(&lstmp);
		}
		ac--;
	}
//	ft_sort(&lsta);
	
	ft_quicksort(lst1,*lsta);
	ft_freelst(lsta);
	ft_freelst(lst1);
	//lsta = sort_list(lsta,croissant);

//	ft_printlst(lstmp);
//	while (lsta)
//	{
//		printf("%d\n",((t_numb*)lsta->content)->val);
//		lsta = lsta->next;
//	}
/*
	while(42)
	{
	}
*/
	return (0);
}
