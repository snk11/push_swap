/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 19:51:00 by syusof            #+#    #+#             */
/*   Updated: 2015/06/02 16:15:33 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_comptelem(t_lst *lsta)
{
	int		nb;

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
	while (index < nbelem)
	{
		if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
			swap(&lsta);

		while (lstmp->next > lstmp)
		{
			lstmp = lstmp->next;
			index++;
		}
		

		if (lstb == NULL)
		{

			while ((index + 1) != 0)
			{
				if (index2 == 0)
					lstb = create_lst(((t_numb*)(*lsta)->content));
				else
					push(&lstb, &lsta);
				index--;
			}
		}
		else
		{
			while (index2 != 0)
			{
				push(&lsta, &lstb);
				index2--;
			}
		}
	}
}
