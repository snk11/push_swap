/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:08:15 by syusof            #+#    #+#             */
/*   Updated: 2016/11/06 16:21:20 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_insertionsort(t_lst ***lsta)
{
	t_lst	*lstb;

	lstb = NULL;
	while(**lsta)
	{
		push1(&lstb,&lsta);
		write(1,"pb\n",3);
		ft_bublesort1_uns(&lstb);
	}
	while(lstb)
	{
		push2(&lsta,&lstb);
		write(1,"pa\n",3);
	}
}
