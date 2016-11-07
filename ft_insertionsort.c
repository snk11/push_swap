/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:08:15 by syusof            #+#    #+#             */
/*   Updated: 2016/11/07 09:32:50 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



#include <stdio.h>
int		get_indexinsert(t_lst *lstmp,int limit)
{
	int		index;
	int		min;
	int		i;

	index = 0;
	min = ((t_numb*)(lstmp)->content)->val;
	i = 0;
	while (i < limit)
	{
		if(((t_numb*)(lstmp)->content)->val < min)
		{
			index = i;
			min = ((t_numb*)lstmp->content)->val;
		}
		lstmp = lstmp->next;
		i++;
	}
	return (index);
}

void		ft_insertionsort(t_lst ***lsta)
{
	t_lst	*lstb;
	int		index;
	int		i;
	int		nbelema;

	lstb = NULL;
	ft_slide_a(&lsta);
	if (ft_checksort(**lsta) == 0)
	{
		while(**lsta)
		{
			ft_slide_a(&lsta);
			nbelema = ft_comptelem(**lsta);
			index = get_indexinsert(**lsta,nbelema);
			i = 0;
//			if(nbelema > 1)
			{
				if (index < nbelema / 2)
				{
					while( i < index)
					{
						rotate4(&lsta);
						write(1,"ra\n",3);
						i++;
					}
				}
				else
				{
					while( i <= nbelema  - (index + 1))
					{
						reverse4(&lsta);
						write(1,"rra\n",4);
						i++;
					}
				}
				push1(&lstb,&lsta);
				write(1,"pb\n",3);
			}
		}
		while(lstb)
		{
			push2(&lsta,&lstb);
			write(1,"pa\n",3);
		}
	}
}




/*
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
   */
