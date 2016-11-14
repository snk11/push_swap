/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:08:15 by syusof            #+#    #+#             */
/*   Updated: 2016/11/14 15:41:12 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void		ft_insertionsort2(t_lst ****lsta,t_lst **lstb,t_lst ****lstop)
{
	int		index;
	int		i;
	int		j;
	int		nbelema;
	int		nbelemf;

	nbelemf = ft_comptelem(*lstb);
	if (ft_checksort(*lstb) == 0)
	{
		j = 0;
		ft_insertionsort_p21(&lsta,&lstb,&lstop);
	}
}

void		ft_insertionsort_p21(t_lst *****lsta,t_lst ***lstb,t_lst *****lstop)
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
					ft_lstop_add_down3(&lstop,22);
//					write(1,"rb\n",3);
					i++;
				}
			}
			else if (index >= nbelema / 2)
			{
				while( i < nbelema  - index)
				{
					reverse4(&lstb);
					ft_lstop_add_down3(&lstop,23);
//					write(1,"rrb\n",4);
					i++;
				}
			}
			push7(&lsta,&lstb);
			ft_lstop_add_down3(&lstop,4);
//			write(1,"pa\n",3);
		}
		else if (nbelema % 2 != 0)
		{
			if (index <= nbelema / 2)
			{
				while( i < index)
				{
					rotate4(&lstb);
					ft_lstop_add_down3(&lstop,22);
//					write(1,"rb\n",3);
					i++;
				}
			}
			else if (index > nbelema / 2)
			{
				while( i < nbelema  - index)
				{
					reverse4(&lstb);
					ft_lstop_add_down3(&lstop,23);
//					write(1,"rrb\n",4);
					i++;
				}
			}
			push7(&lsta,&lstb);
			ft_lstop_add_down3(&lstop,4);
//			write(1,"pa\n",3);
		}
		j++;
	}
}
