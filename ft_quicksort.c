/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 08:26:36 by syusof            #+#    #+#             */
/*   Updated: 2016/09/21 16:17:56 by syusof           ###   ########.fr       */
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
		printf("lstmp = %d\n",((t_numb*)(*lstmp)->content)->val);
		printf("lsta2 = %d\n",((t_numb*)(lsta2)->content)->val);
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
		printf("inde = %d\n",index);
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

	nbelem3 = ft_comptelem(lsta2);
	ind1 = 1;
	while (ind1 == 1)
	{
//		lsta2 = ft_reverse_lst(*lsta);
		ind1 = 0;
		index3 = 0;
		while(index3 < nbelem3 - 1)
		{
//			lsta2 = ft_reverse_lst(*lsta);
	//		while (index < nbelem - 1)
			{
				bug++;
				lstmp = *lsta;
				nbelemc = ft_comptelem(lsta2);
				lstmp = *lsta;
				index = nbelem3 - 1 - index3;
				if  (lstmp)
				{
					index4 = get_indexquick(&lstmp,nbelemc,lsta2);
					printf("index4 = %d\n",index4);
				}
				if (index4 > -1)
				{
					ind1 = 1;
					if (((t_numb*)lsta2->content)->val < ((t_numb*)(lstmp)->content)->val || index2 > 0)
					{
						if (lstb == NULL)
						{
							while (index > 0)
							{
								push(&lstb, lsta);
								index--;
								index2++;
							}

							while (index4 > -1)
							{
								rotate(&lstb);
								index4--;
							}
							nbelem2 = ft_comptelem(lstb);
							while(nbelem2 > 0)
							{
								push(lsta, &lstb);
								nbelem2--;
							}
						}
//						else
//						{
//							while ((index2) > 0)
//							{
//								push(lsta, &lstb);
//								index2--;
//							}
//						}
					}
				}
			}
			lsta2 = lsta2->next;
			index3++;
		}
	}
}