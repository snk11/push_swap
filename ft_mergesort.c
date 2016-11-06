/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:54:35 by syusof            #+#    #+#             */
/*   Updated: 2016/11/06 14:27:43 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



#include <stdio.h>
void	ft_mergesort(t_lst ***lsta)
{
	int		nbelema;
	int		i;
	t_lst	*lstb;
	int		isa;
	int		isb;
	int		irra;
	int		irrb;

	isa = 1;
	isb = 1;
	lstb = NULL;
	nbelema = 0;
	i = 0;
	irra = 0;
	irrb = 0;
	nbelema = ft_comptelem(**lsta);
	ft_putnbr(nbelema);
	ft_putstr("\n");
	while(i < (nbelema / 2))
	{
		push1(&lstb,&lsta);
		write(1,"pb1\n",4);
		i++;
	}
	int g = 0;
	while ((isa == 1 || isb == 1) && g < 6)
	{
		g++;
		isa = 0;
		isb = 0;
		i = 0;
		if(ft_comptelem(**lsta) <= 2)
		{
			if(ft_comptelem(**lsta) == 2)
			{
				if(((t_numb*)(**lsta)->content)->val > ((t_numb*)((**lsta)->next)->content)->val)
				{
					swap1(&lsta);
					write(1,"sa\n",3);
					isa = 1;
				}
			}
		}
		else
		{
		while(i < (nbelema / 2 - 1))
		{
			//			ft_putstr("i = ");
			//			ft_putnbr(i);
			//			ft_putstr("\n");
			if(ft_comptelem(**lsta) >= 2)
			{
				if(((t_numb*)(**lsta)->content)->val > ((t_numb*)((**lsta)->next)->content)->val)
				{
					swap1(&lsta);
					write(1,"sa\n",3);
					isa = 1;
				}
			}
			if(ft_comptelem(lstb) >= 2)
			{
				if(((t_numb*)lstb->content)->val > ((t_numb*)(lstb->next)->content)->val)
				{
					swap(&lstb);
					write(1,"sb\n",3);
					isb = 1;
				}
			}
			if(ft_comptelem(**lsta) >= 2)
			{
				rotate4(&lsta);
				write(1,"ra\n",3);
			}
			if(ft_comptelem(lstb) >= 2)
			{
				rotate(&lstb);
				write(1,"rb\n",3);
			}
			i++;
	ft_putstr("lsta = ");
	ft_printlst(**lsta);
	ft_putstr("\n");
	ft_putstr("lstb = ");
	ft_printlst(lstb);
	ft_putstr("\n");
		}
//		if((ft_comptelem(**lsta) % 2 != 0) && ft_comptelem(**lsta) >= 2)
		if (ft_comptelem(**lsta) >= 2)
		{
			rotate4(&lsta);
			write(1,"ra\n",3);
		}
		if(ft_comptelem(lstb) >= 2)
		{
			rotate(&lstb);
			write(1,"rb\n",3);
		}
		}

	}
		if((ft_comptelem(**lsta) % 2 != 0) && ft_comptelem(**lsta) >= 2)
		{
			rotate4(&lsta);
			write(1,"ra\n",3);
		}
	ft_putstr("lsta = ");
	ft_printlst(**lsta);
	ft_putstr("\n");
	ft_putstr("lstb = ");
	ft_printlst(lstb);
	ft_putstr("\n");

	while(**lsta)
	{
		push1(&lstb,&lsta);
		write(1,"pb2\n",4);
		i++;
	}
	i = 0;
	isb = 0;
	while(i < (nbelema / 2))
	{
		ft_putstr("i = ");
		ft_putnbr(i);
		ft_putstr("\n");
		irrb = 0;
		if(isb == 0)
		{
			reverse(&lstb);
			write(1,"rrb\n",4);
			irrb = 1;
		}
		isb = 0;
		if(((t_numb*)lstb->content)->val < ((t_numb*)(lstb->next)->content)->val)
		{
			swap(&lstb);
			write(1,"sb\n",3);
			isb = 1;
		}
		printf("isb = %d, irrb = %d\n",isb,irrb);
		if(isb != 0 && irrb != 0)
		{
			push2(&lsta,&lstb);
			write(1,"pa\n",3);
		}
		//		push2(&lsta,&lstb);
		//		write(1,"pa\n",3);
		i++;
		ft_putstr("lsta = ");
		ft_printlst(**lsta);
		ft_putstr("\n");
		ft_putstr("lstb = ");
		ft_printlst(lstb);
		ft_putstr("\n");
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
	//push2(&lsta,&lstb);
	//write(1,"pa\n",3);
	if(lstb)
	{

		isb = 1;
		while (isb == 1)
		{

			isb = 0;
			i = 0;
			while(i < (ft_comptelem(lstb)) - 1)
			{
							ft_putstr("i = ");
							ft_putnbr(i);
							ft_putstr("\n");
				if(ft_comptelem(lstb) >= 2)
				{
					if(((t_numb*)lstb->content)->val < ((t_numb*)(lstb->next)->content)->val)
					{
						swap(&lstb);
						write(1,"sb\n",3);
						isb = 1;
					}
				}
				if(ft_comptelem(lstb) >= 2)
				{
					rotate(&lstb);
					write(1,"rb\n",3);
				}
				i++;
	ft_putstr("lstb = ");
	ft_printlst(lstb);
	ft_putstr("\n");
			}
//			if((ft_comptelem(lstb) % 2 = 0) && ft_comptelem(lstb) >= 2)
			{
				rotate(&lstb);
				write(1,"rb\n",3);
			}
		}
	}
//	if((ft_comptelem(lstb) % 2 == 0) && ft_comptelem(lstb) >= 2)
//	{
//		rotate(&lstb);
//		write(1,"rb\n",3);
//	}
	while(lstb)
	{
		push2(&lsta,&lstb);
		write(1,"pa\n",3);
	}
}
