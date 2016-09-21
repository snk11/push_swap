/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 08:26:36 by syusof            #+#    #+#             */
/*   Updated: 2016/09/21 11:45:53 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"



int		get_indexquick(t_lst **lstmp, int nbelemc, t_lst *lsta2)
{
	int index;

	index = -1;
	while (((t_numb*)(*lstmp)->content)->val <= ((t_numb*)(lsta2)->content)->val && (index < nbelemc - 1) && lstmp)
	{
		index++;
//		if (((*lstmp)->next)->next)
			(*lstmp) = (*lstmp)->next;
//		printf("lstmp:%d\n",((t_numb*)(*lstmp)->content)->val);
	}
	return index;
}


#include <stdio.h>
void		ft_quicksort(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;
	t_lst	*lsta2;
	int		index;
	int		index2;
	int		index3;
	int		index4;
	int		nbelem;
	int		nbelem3;
	int		nbelemc;
	t_lst	*lstb;
	t_numb	*e;
	int		cnt1;
	int		cnt2;


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

	nbelem = ft_comptelem(*lsta);
	cnt1 = 0;
	while (cnt1 < nbelem)
	{
		lstmp = *lsta;
		cnt2 = 1;
		while((lstmp)->next && cnt2 < (nbelem - cnt1))
		{
			lstmp = lstmp->next;
			cnt2++;
		}
		e = (t_numb*)malloc(sizeof(t_numb));
		e->val = ((t_numb*)(lstmp)->content)->val;
		lstmp2 = create_lst(e);
		lst_add(&lsta2, &lstmp2);
		cnt1++;
	}

	nbelem3 = ft_comptelem(lsta2);
	index3 = 0;
	while(index3 < nbelem3 - 1)
	{
//		while (index < nbelem - 1)
		{
			index = 0;
			bug++;
			lstmp = *lsta;
			nbelemc = ft_comptelem(*lsta);
			lstmp = *lsta;
			index = index3;
			if  (lstmp)
			{
				index4 = get_indexquick(&lstmp,nbelemc,lsta2);
			}
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
					push(lsta, &lstb);
					swap(lsta);
				}
				else
				{
					while ((index2) > 0)
					{
						push(lsta, &lstb);
						index2--;
					}
				}
			}
		}
		lsta2 = lsta2->next;
		index3++;
	}
}
