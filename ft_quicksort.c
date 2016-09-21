/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 08:26:36 by syusof            #+#    #+#             */
/*   Updated: 2016/09/21 09:29:07 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"





#include <stdio.h>
void		ft_quicksort(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;
	t_lst	*lsta2;
	int		index;
	int		index2;
	int		nbelem;
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

	if ((*lsta)->next)
	{
		if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
			swap(lsta);
	}

	while (index < nbelem - 1)
	{
		index = 0;
		bug++;
		lstmp = *lsta;
		nbelemc = ft_comptelem(*lsta);
		lstmp = *lsta;
		if  (lstmp->next)
		{
			index = get_index(&lstmp,nbelemc);
		}
		if (((t_numb*)lstmp->content)->val > ((t_numb*)(lstmp->next)->content)->val || index2 > 0)
		{
			if (lstb == NULL)
			{
				while (index > 0)
				{
					push(&lstb, lsta);
					index--;
					index2++;
				}
			}
			else
			{
				while ((index2) > 0)
				{
					push(lsta, &lstb);
					index2--;
				}
				lstmp = *lsta;
				nbelemc = ft_comptelem(*lsta);
			}
			if ((*lsta)->next)
			{
				if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
					swap(lsta);
			}
		}
		lstmp = *lsta;
		if ((lstmp)->next)
		{
			while ((lstmp->next)->next)
			{
				lstmp = lstmp->next;
			}
		}

	}
}
