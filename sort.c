/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 19:51:00 by syusof            #+#    #+#             */
/*   Updated: 2015/06/14 20:41:30 by syusof           ###   ########.fr       */
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
void		ft_sort(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;
	int		index;
	int		index2;
	int		nbelem;
	t_lst	*lstb;


	index = 0;
	index2 = 0;
	lstmp = NULL;
	lstmp2 = NULL;

	int		a;
	int		b;

	lstb = NULL;

	nbelem = ft_comptelem(*lsta);
//	printf("%d\n",nbelem);

/*
	if ((*lsta)->next)
		{
			if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
				swap(lsta);
		}
					push(&lstb, lsta);
	if ((*lsta)->next)
		{
			if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
				swap(lsta);
		}

					push(lsta, &lstb);
		if ((*lsta)->next)
		{
			if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
				swap(lsta);
		}
*/



	while (index < nbelem - 1)
	{
		printf("gg\n");
		if ((*lsta)->next)
		{
			if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
				swap(lsta);
		}

		lstmp = *lsta;
//		printf("%d\n",((t_numb*)(*lsta)->content)->val);
		if  (lstmp->next)
		{
			printf("ff\n");

			while (((t_numb*)lstmp->content)->val < ((t_numb*)(lstmp->next)->content)->val && (index < nbelem - 1))
			{
				if ((lstmp->next)->next)
					lstmp = lstmp->next;
				index++;
//				printf("index:%d\n",index);
			}
		}
		if (((t_numb*)lstmp->content)->val > ((t_numb*)(lstmp->next)->content)->val || lstb != NULL)
		{
			printf("A\n");
			if (lstb == NULL)
			{
			
//	printf("%d\n",((t_numb*)((*lsta)->next)->content)->val);
				while ((index) != 0)
				{
//					lstb = create_lst(((t_numb*)(*lsta)->content));
//					printf("%d\n",index);
					push(&lstb, lsta);
//	printf("lstb: %d\n",((t_numb*)lstb->content)->val);
					index--;
					index2++;
					printf("pushb");
				}
//				printf("%d\n",index);
			}
			else
			{
				while ((index2) != 0)
				{
					push(lsta, &lstb);
					index2--;
					printf("pusha");
//					if (index2 == 0)
//					{
	//					free(lstb);
//						lstb = NULL;
//					}
					index = 0;
				}
			}
		}
	}
}
