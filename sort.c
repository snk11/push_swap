/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 21:14:19 by syusof            #+#    #+#             */
/*   Updated: 2016/11/04 18:05:51 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"


int		ft_comptelem(t_lst *lsta)
{
	int		nb;

	nb = 0;
	if (lsta)
	{
		nb = 1;
		while (lsta)
		{
			nb++;
			lsta = lsta->next;
		}
	}
	return (nb - 1);
}

#include <stdio.h>
int		get_index(t_lst **lstmp, int nbelemc)
{
	int index;

	index = 0;
	while (((t_numb*)(*lstmp)->content)->val <= ((t_numb*)((*lstmp)->next)->content)->val && (index < nbelemc - 1))
	{
		index++;
		if (((*lstmp)->next)->next)
			(*lstmp) = (*lstmp)->next;
//		printf("lstmp:%d\n",((t_numb*)(*lstmp)->content)->val);
	}
	return index;
}


void		ft_sort(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;
	int		index;
	int		index2;
	int		nbelem;
	int		nbelemc;
	t_lst	*lstb;


	index = 0;
	index2 = 0;
	lstmp = NULL;
	lstmp2 = NULL;


	int bug = 0;
	int		a;
	int		b;

	int n;

	lstb = NULL;

	nbelem = ft_comptelem(*lsta);

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
//		if ((lstmp)->next)
//		{
//			while ((lstmp->next)->next)
//			{
//				lstmp = lstmp->next;
//			}
//		}

	}
}

/*
int croissant(int a, int b)
{
		return (a <= b);
}


t_lst		*sort_list(t_lst *lst, int (*cmp)(int,int))
{
	t_lst *lstmp1;
	t_lst *lstmp2;
	t_lst *lstbegi;
	int		ind;

	lstbegi = lst;
	lstmp1 = NULL;
	lstmp2 = NULL;
	ind = 1;
	if (lst == NULL)
		ind = 0;
	while (ind != 0)
	{
		ind = 0;
		lst = lstbegi;
		lstmp1 = lst;
		if (lstbegi->next)
		{
			if ((cmp)(((t_numb*)lstbegi->content)->val,(((t_numb*)(lstbegi->next)->content))->val) == 0)
			{
				lstmp2 = (lstbegi->next)->next;
				lstmp1 = lstbegi->next;
				(lstbegi->next)->next = lstbegi;
				lstbegi->next = lstmp2;
				lstbegi = lstmp1;
				ind = 1;
			}
			lst = lstbegi;
			lst = lst->next;
		}
		while(lst->next != NULL)
		{
			if ((cmp)(((t_numb*)lst->content)->val,(((t_numb*)(lst->next)->content))->val) == 0)
			{
				lstmp1->next = lst->next;
				lstmp2 = (lst->next)->next;
				(lst->next)->next = lst;
				lst->next = lstmp2;
				ind = 1;
			}
			lst = lstmp1->next;
			lstmp1 = lst;
			if (lst->next)
				lst = lst->next;
		}

	}
	return (lstbegi);
}
*/
