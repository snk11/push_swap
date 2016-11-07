/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:08:15 by syusof            #+#    #+#             */
/*   Updated: 2016/11/07 10:07:50 by syusof           ###   ########.fr       */
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
	int		j;
	int		nbelema;
	int		nbelemf;

	lstb = NULL;
	nbelemf = ft_comptelem(**lsta);
	ft_slide_a(&lsta);
	if (ft_checksort(**lsta) == 0)
	{
		j = 0;
		ft_insertionsort_p1(&lsta,&lstb);
		while(lstb)
		{
			push2(&lsta,&lstb);
			write(1,"pa\n",3);
		}
	}
}

void		ft_insertionsort_p1(t_lst ****lsta,t_lst **lstb)
{
	int		i;
	int		j;
	int		index;
	int		nbelema;
	int		nbelemf;

	nbelemf = ft_comptelem(***lsta);
	j = 0;
//	while(j < nbelemf / 2)
	while(j < nbelemf)
	{
		ft_slide_a1(&lsta);
		nbelema = ft_comptelem(***lsta);
//		index = get_indexinsert(***lsta,nbelema / 2);
		index = get_indexinsert(***lsta,nbelema);
		i = 0;
		//			if(nbelema > 1)
		{
			if (index < nbelema / 2)
			{
				while( i < index)
				{
					rotate3(&lsta);
					write(1,"ra\n",3);
					i++;
				}
			}
			else
			{
				while( i <= nbelema  - (index + 1))
				{
					reverse3(&lsta);
					write(1,"rra\n",4);
					i++;
				}
			}
			push5(&lstb,&lsta);
			write(1,"pb\n",3);
		}
		j++;
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
