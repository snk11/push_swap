/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 19:51:00 by syusof            #+#    #+#             */
/*   Updated: 2015/06/14 01:26:28 by syusof           ###   ########.fr       */
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
	printf("%d\n",nbelem);
		if ((*lsta)->next)
		{
			if (((t_numb*)(*lsta)->content)->val > ((t_numb*)((*lsta)->next)->content)->val)
				swap(lsta);
		}

	while (index < nbelem - 1)
	{
		lstmp = *lsta;
	printf("%d\n",((t_numb*)(*lsta)->content)->val);
		printf("gg\n");
		if (lstmp->next)
		{
			printf("ff\n");
				a =((t_numb*)lstmp->content)->val;
				b =((t_numb*)(lstmp->next)->content)->val;

			if (a < b)
			{
				lstmp = lstmp->next;
				index++;
				printf("index:%d\n",index);
			}
			else
			{
				break;
			}
		}
		if (index < nbelem - 1)
		{
			printf("A\n");
			if (lstb == NULL)
			{
			
	printf("%d\n",((t_numb*)((*lsta)->next)->content)->val);
				while ((index) != 0)
				{
//					lstb = create_lst(((t_numb*)(*lsta)->content));
//					printf("%d\n",index);
					push(&lstb, lsta);
	printf("%d\n",((t_numb*)(*lsta)->content)->val);
					index--;
					index2++;
				}
//				printf("%d\n",index);
			}
			else
			{
				while ((index2) != 0)
				{
					push(lsta, &lstb);
					index2--;
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
