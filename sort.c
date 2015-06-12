/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 19:51:00 by syusof            #+#    #+#             */
/*   Updated: 2015/06/12 18:37:28 by syusof           ###   ########.fr       */
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
		while (lsta->next != NULL)
		{
			nb++;
			lsta = lsta->next;
		}
	}
	return (nb);
}


void		ft_sort(t_lst **lsta)
{
	t_lst	*lstmp;
	int		index;
	int		index2;
	int		nbelem;
	t_lst	*lstb;

	index = 0;
	index2 = 0;
	lstmp = NULL;

	lstb = NULL;

	lstmp = *lsta;
	nbelem = ft_comptelem(*lsta);

/*
		if (((t_numb*)((*lsta)->next)->content)->val)
		{
			if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
				swap(lsta);
		}
*/
/*

	while (index < nbelem)
	{
		if (((t_numb*)((*lsta)->next)->content)->val)
		{
			if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
				swap(lsta);
		}
		while (((t_numb*)((*lsta)->next)->content)->val)
		{
			if (((t_numb*)(lstmp->next)->content)->val > ((t_numb*)lstmp->content)->val)
			{
				lstmp = lstmp->next;
				index++;
			}
		}
		if (lstb == NULL)
		{
			while ((index + 1) != 0)
			{
				lstb = create_lst(((t_numb*)(*lsta)->content));
				push(&lstb, lsta);
				index--;
				index2++;
			}
		}
		else
		{
			while ((index2 + 1) != 0)
			{
				push(lsta, &lstb);
				index2--;
				if (index2 == 0)
				{
					free(lstb);
					lstb = NULL;
				}
				index = 0;
			}
		}
	}
*/
}
