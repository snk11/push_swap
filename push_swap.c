/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2016/10/14 16:47:23 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


#include <stdio.h>

int		main(int ac,char **av)
{
	t_lst	*lsta;
	t_lst	*lstmp;
	t_numb	*e;

	lsta = NULL;
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
			if (ft_checkdouble(lsta,e->val) == 0)
			{
				write(2, "Error\n", 6);
				return (0);
			}
			lstmp = create_lst(e);
			lst_add(&lsta, &lstmp);
		}
		ac--;
	}
//	ft_sort(&lsta);
	ft_quicksort(&lsta);
	//lsta = sort_list(lsta,croissant);

//	while (lsta)
//	{
//		printf("%d\n",((t_numb*)lsta->content)->val);
//		lsta = lsta->next;
//	}
	return (0);
}
