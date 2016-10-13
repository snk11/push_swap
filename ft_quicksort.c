/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 08:26:36 by syusof            #+#    #+#             */
/*   Updated: 2016/10/13 14:07:27 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"



#include <stdio.h>
int		get_indexquick(t_lst **lstmp, int nbelemc, t_lst *lsta2)
{
	int index;
	int ind1;

	ind1 = 0;
	index = -1;
	while (*lstmp && ind1 == 0 && index < nbelemc - 1)
	{
		if(((t_numb*)(*lstmp)->content)->val <= ((t_numb*)(lsta2)->content)->val)
		{
			index++;
			(*lstmp) = (*lstmp)->next;
		}
		else
		{
			ind1 = 1;
			index++;
		}
	}
	if (*lstmp == NULL || index == nbelemc - 1)
		return -1;
	return index;
}


void		ft_quicksort(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;
	t_lst	*lsta2;
	int		ind1;
	int		index;
	int		index2;
	int		index3;
	int		index4;
	int		nbelem;
	int		nbelem2;
	int		nbelem3;
	int		nbelemc;
	int		nbelema;
	t_lst	*lstb;
	t_numb	*e;


	index = 0;
	index2 = 0;
	lstmp = NULL;
	lstmp2 = NULL;
	lsta2 = NULL;
	e = NULL;


	int bug = 0;
	int		a;
	int		b;

	int n;

	lstb = NULL;

	lsta2 = ft_reverse_lst(*lsta);

	nbelema = ft_comptelem(*lsta);
	nbelemc = ft_comptelem(lsta2);
	ind1 = 1;
	if(*lsta && (*lsta)->next && (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val))
	{
		swap(lsta);
		write(1,"sa\n",3);
	}

	while (ind1 == 1 || lsta2)
	{
		if (ind1 == 1)
		{
			lsta2 = ft_reverse_lst(*lsta);
			index3 = 0;
		}
		ind1 = 0;
		{
			{
				bug++;
				lstmp = *lsta;
				nbelemc = ft_comptelem(lsta2);
				lstmp = *lsta;
				index = nbelemc - 1;
				if  (lstmp)
				{
					index4 = get_indexquick(&lstmp,nbelemc,lsta2);
				}
				if (index4 > -1)
				{
					ind1 = 1;
					if (((t_numb*)lsta2->content)->val < ((t_numb*)(lstmp)->content)->val)
					{
						if (index != 1)
						{
							while (index > 0)
							{
								push(&lstb, lsta);
								write(1,"pb\n",3);
								index--;
							}
							while ((nbelema - index3) - (index4 + 1 + 1) > 0)
							{
								rotate(&lstb);
								write(1,"rb\n",3);
								index4++;
							}
							push(lsta,&lstb);
								write(1,"pa\n",3);
							swap(lsta);
							write(1,"sa\n",3);
							nbelem2 = ft_comptelem(lstb);
							while(nbelem2 > 0)
							{
								push(lsta, &lstb);
								write(1,"pa\n",3);
								nbelem2--;
							}
						}
						else
						{
							swap(lsta);
							write(1,"sa\n",3);
						}
					}
				}
			}
			lsta2 = lsta2->next;
			index3++;
		}
	}
}
