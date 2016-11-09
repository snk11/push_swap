/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:54:52 by syusof            #+#    #+#             */
/*   Updated: 2016/11/09 13:06:41 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"






#include <stdio.h>
void	ft_sort_tab(int **tab,int nbelema)
{
	int		i;
	int		w;
	int		ind1;

	ind1 = 1;
	while(ind1 == 1)
	{
		i = 0;
		ind1 = 0;
		while((*tab)[i] && (*tab)[i+1])
		{
			if((*tab)[i] > (*tab)[i+1])
			{
				w = (*tab)[i];
				(*tab)[i] = (*tab)[i+1];
				(*tab)[i+1] = w;
				ind1 = 1;
			}
			i++;
		}
	}
}

void	ft_copy_in_tab(t_lst *lsta,int	**tab)
{
	int	i;

	i = 0;
	while (lsta && lsta->next)
	{
		(*tab)[i] = ((t_numb*)lsta->content)->val;
//		printf("tab[%d] = %d, lstaval = %d\n",i,(*tab)[i],((t_numb*)lsta->content)->val);
		i++;
		lsta = lsta->next;
	}
	if(lsta)
	{
		(*tab)[i] = ((t_numb*)lsta->content)->val;
	}
}
