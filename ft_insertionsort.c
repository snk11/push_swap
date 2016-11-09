/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:08:15 by syusof            #+#    #+#             */
/*   Updated: 2016/11/09 13:59:39 by syusof           ###   ########.fr       */
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

int		get_indexinsert2(t_lst *lstmp,int limit)
{
	int		index;
	int		max;
	int		i;

	index = 0;
	max = ((t_numb*)(lstmp)->content)->val;
	i = 0;
	while (i < limit)
	{
		if(((t_numb*)(lstmp)->content)->val > max)
		{
			index = i;
			max = ((t_numb*)lstmp->content)->val;
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
//		ft_insertionsort_p1(&lsta,&lstb);
		ft_insertionsort_p2(&lsta,&lstb);
//		ft_mergesort(&lsta,&lstb,nbelemf);
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
	while(j < nbelemf / 2)
	{
		ft_slide_a1(&lsta);
		nbelema = ft_comptelem(***lsta);
		index = get_indexinsert(***lsta,nbelema / 2);
		i = 0;
		if (nbelema % 2 == 0)
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
			else if (index >= nbelema / 2)
			{
				while( i < nbelema  - index)
				{
					reverse3(&lsta);
					write(1,"rra\n",4);
					i++;
				}
			}
			push5(&lstb,&lsta);
			write(1,"pb\n",3);
		}
		else if (nbelema % 2 != 0)
		{
			if (index <= nbelema / 2)
			{
				while( i < index)
				{
					rotate3(&lsta);
					write(1,"ra\n",3);
					i++;
				}
			}
			else if (index > nbelema / 2)
			{
				while( i < nbelema  - index)
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


void		ft_insertionsort_p2(t_lst ****lsta,t_lst **lstb)
{
	int		i;
	int		j;
	int		index;
	int		nbelema;
	int		nbelemf;

	nbelemf = ft_comptelem(***lsta);
	j = 0;
	while(j < nbelemf)
	{
//		ft_slide_a1(&lsta);
		nbelema = ft_comptelem(***lsta);
		index = get_indexinsert(***lsta,nbelema);
		i = 0;
		if (nbelema % 2 == 0)
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
			else if (index >= nbelema / 2)
			{
				while( i < nbelema  - index)
				{
					reverse3(&lsta);
					write(1,"rra\n",4);
					i++;
				}
			}
			push5(&lstb,&lsta);
			write(1,"pb\n",3);
		}
		else if (nbelema % 2 != 0)
		{
			if (index <= nbelema / 2)
			{
				while( i < index)
				{
					rotate3(&lsta);
					write(1,"ra\n",3);
					i++;
				}
			}
			else if (index > nbelema / 2)
			{
				while( i < nbelema  - index)
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

void		ft_insertionsort2(t_lst ****lsta,t_lst **lstb)
{
	int		index;
	int		i;
	int		j;
	int		nbelema;
	int		nbelemf;

	nbelemf = ft_comptelem(*lstb);
	ft_slide_a2_uns(&lstb);
//	ft_printlst(*lstb);
	if (ft_checksort(*lstb) == 0)
	{
		j = 0;
//		ft_insertionsort_p1(&lsta,&lstb);
		ft_insertionsort_p21(&lsta,&lstb);
//		ft_mergesort(&lsta,&lstb,nbelemf);
//		while(lstb)
//		{
//			push5(&lstb,&lsta);
//			write(1,"pa\n",3);
//		}
	}
}

void		ft_insertionsort_p21(t_lst *****lsta,t_lst ***lstb)
{
	int		i;
	int		j;
	int		index;
	int		nbelema;
	int		nbelemf;

	nbelemf = ft_comptelem(**lstb);
	j = 0;
	while(j < nbelemf)
	{
		ft_slide_a4_uns(&lstb);
		nbelema = ft_comptelem(**lstb);
		index = get_indexinsert2(**lstb,nbelema);
		i = 0;
		if (nbelema % 2 == 0)
		{
			if (index < nbelema / 2)
			{
				while( i < index)
				{
					rotate4(&lstb);
					write(1,"ra\n",3);
					i++;
				}
			}
			else if (index >= nbelema / 2)
			{
				while( i < nbelema  - index)
				{
					reverse4(&lstb);
					write(1,"rra\n",4);
					i++;
				}
			}
			push7(&lsta,&lstb);
			write(1,"pb\n",3);
		}
		else if (nbelema % 2 != 0)
		{
			if (index <= nbelema / 2)
			{
				while( i < index)
				{
					rotate4(&lstb);
					write(1,"ra\n",3);
					i++;
				}
			}
			else if (index > nbelema / 2)
			{
				while( i < nbelema  - index)
				{
					reverse4(&lstb);
					write(1,"rra\n",4);
					i++;
				}
			}
			push7(&lsta,&lstb);
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
