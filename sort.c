/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 19:51:00 by syusof            #+#    #+#             */
/*   Updated: 2015/06/14 23:32:30 by syusof           ###   ########.fr       */
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
	int		nbelemc;
	t_lst	*lstb;


	index = 0;
	index2 = 0;
	lstmp = NULL;
	lstmp2 = NULL;

	int		a;
	int		b;

	int n;

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
		
		nbelemc = ft_comptelem(*lsta);
		printf("------------------\n");
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

			while (((t_numb*)lstmp->content)->val < ((t_numb*)(lstmp->next)->content)->val && (index < nbelemc - 1))
			{
				index++;
				if ((lstmp->next)->next)
					lstmp = lstmp->next;
				printf("index:%d\n",index);
			}
		}
		if (((t_numb*)lstmp->content)->val > ((t_numb*)(lstmp->next)->content)->val || lstb != NULL)
		{
			printf("A\n");
			if (lstb == NULL)
			{
			
//	printf("%d\n",((t_numb*)((*lsta)->next)->content)->val);
				while (index > 0)
				{
//					lstb = create_lst(((t_numb*)(*lsta)->content));

					push(&lstb, lsta);
	printf("lstb: %d\n",((t_numb*)lstb->content)->val);
					index--;
					index2++;
					printf("pb\n");

				}
				printf("out");
//				printf("%d\n",index);
			}
			else
			{
				while ((index2) > 0)
				{
					push(lsta, &lstb);
					index2--;
					printf("index2 = %d\n",index2);
					printf("pa\n");
//					if (index2 == 0)
//					{
	//					free(lstb);
//						lstb = NULL;
//					}
					index = 0;
				}
				lstmp = *lsta;
				nbelemc = ft_comptelem(*lsta);
				if  (lstmp->next)
				{
					printf("gg\n");

					while (((t_numb*)lstmp->content)->val < ((t_numb*)(lstmp->next)->content)->val && (index < nbelemc - 1))
					{
						index++;
						if ((lstmp->next)->next)
							lstmp = lstmp->next;
						printf("index:%d\n",index);
					}
					if (index < nbelem - 1)
					{
						lstb = NULL;
						printf("N\n");
					}
				}
			}
		}
	}
}
