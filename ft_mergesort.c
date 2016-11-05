/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:54:35 by syusof            #+#    #+#             */
/*   Updated: 2016/11/05 19:12:14 by syusof           ###   ########.fr       */
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
	ft_putnbr(nbelema);
	ft_putstr("\n");
	while(i < nbelema / 2)
	{
		push1(&lstb,&lsta);
		write(1,"pb1\n",4);
		ft_putnbr(ft_comptelem(lstb));
	ft_printlst(lstb);
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
	i = 0;
	while(**lsta)
	{
		push1(&lstb,&lsta);
		write(1,"pb\n",3);
		if(i != 0 && ft_comptelem(lstb) >= 2)
		{
			if(((t_numb*)lstb->content)->val < ((t_numb*)(lstb->next)->content)->val)
			{
				swap(&lstb);
				write(1,"sb\n",3);
			}
		}
		i++;
	}
	ft_printlst(lstb);
	i = 0;
	while(i < (nbelema / 2 - 1))
	{
		ft_putstr("i = ");
		ft_putnbr(i);
		ft_putstr("\n");
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
	if(ft_comptelem(lstb) == 2)
	{
		if(((t_numb*)lstb->content)->val < ((t_numb*)(lstb->next)->content)->val)
		{
			swap(&lstb);
			write(1,"sb\n",3);
		}
		push2(&lsta,&lstb);
		write(1,"pa\n",3);
	}
	push2(&lsta,&lstb);
	write(1,"pa\n",3);
}
