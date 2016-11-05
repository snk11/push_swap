/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:54:35 by syusof            #+#    #+#             */
/*   Updated: 2016/11/05 17:55:23 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mergesort(t_lst ***lsta)
{
	int		nbelema;
	int		i;
	t_lst	*lstb;

	lstb = NULL;
	nbelema = 0;
	i = 0;
	nbelema = ft_comptelem(**lsta);
	while(i < nbelema / 2)
	{
		push1(&lstb,&lsta);
		write(1,"pb\n",3);
		if(ft_comptelem(lstb) >= 2)
		{
			if(((t_numb*)lstb->content)->val > ((t_numb*)(lstb->next)->content)->val)
			{
				swap(&lstb);
				write(1,"sb\n",3);
			}
		}
		i++;
	}
	while(**lsta)
	{
		push1(&lstb,&lsta);
		write(1,"pb\n",3);
		if(ft_comptelem(lstb) >= 2)
		{
			if(((t_numb*)lstb->content)->val < ((t_numb*)(lstb->next)->content)->val)
			{
				swap(&lstb);
				write(1,"sb\n",3);
			}
		}
	}
	i = 0;
	while(i < nbelema - 1)
	{
		reverse(&lstb);
		write(1,"rrb\n",4);
		if(((t_numb*)lstb->content)->val < ((t_numb*)(lstb->next)->content)->val)
		{
			swap(&lstb);
			write(1,"sb\n",3);
		}
		push2(&lsta,&lstb);
		write(1,"pa\n",3);
		push2(&lsta,&lstb);
		write(1,"pa\n",3);
		i++;
	}
	push2(&lsta,&lstb);
	write(1,"pa\n",3);
}
