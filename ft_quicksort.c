/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:21:40 by syusof            #+#    #+#             */
/*   Updated: 2016/11/05 15:35:27 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_indexquick(t_lst *lstmp, int nbelemc, t_lst *lsta2)
{
	int index;
	int ind1;

	ind1 = 0;
	index = -1;
	while (lstmp && ind1 == 0 && index < nbelemc - 1)
	{
		if(((t_numb*)(lstmp)->content)->val <= ((t_numb*)(lsta2)->content)->val)
		{
			index++;
			(lstmp) = (lstmp)->next;
		}
		else
		{
			ind1 = 1;
			index++;
		}
	}
	if (lstmp == NULL || index == nbelemc - 1)
		return -1;
	return index;
}


void	ft_quicksort(t_lst ***lsta)
{
	t_lst	*lstmp7;
	t_lst	*lsta2;
	int		ind1;
	int		ind2;
	int		index;
	int		index3;
	int		index4;
	int		index5;
	int		nbelem2;
	int		nbelemc;
	int		nbelema;
	int		cnt3;
	t_lst	*lstb;

	index = 0;
	index4 = 0;
	index5 = 0;
	lstmp7 = NULL;
	lsta2 = NULL;
	lstb = NULL;
	cnt3 = 0;
	lsta2 = ft_reverse_lst(**lsta);
	nbelema = ft_comptelem(**lsta);
	nbelemc = ft_comptelem(lsta2);
	ind1 = 1;
	ind2 = 0;
	while (ind1 == 1 || lsta2)
	{
		ft_slide_a(&lsta);
		if (ind1 == 1)
		{
			ft_freelst(&lsta2);
			lsta2 = ft_reverse_lst(**lsta);
			index3 = 0;
		}
		ind1 = 0;
		{
			{
				nbelemc = ft_comptelem(lsta2);
				index = nbelemc - 1;
				if  (**lsta)
				{
					index4 = get_indexquick(**lsta,nbelemc,lsta2);
				}
					if (index4 > -1)
					{
						ind1 = 1;
						{
							if (index != 1)
							{
								while (index > 0)
								{
									push1(&lstb, &lsta);
									write(1,"pb\n",3);
									index--;
								}
								if (((nbelema - index3) / 2) < (index4 + 1 + 1))
								{
									index5 = index4;
									cnt3 = 0;
									while ((nbelema - index3) - (index4 + 1 + 1) > 0)
									{
										rotate(&lstb);
										write(1,"rb\n",3);
										index4++;
										cnt3++;
									}
									index4 = index5;
								}
								else if (((nbelema - index3) / 2) >= (index4 + 1 + 1))
								{
									index5 = index4;
									cnt3 = 0;
									while (index4 + 1 > 0)
									{
										reverse(&lstb);
										write(1,"rrb\n",4);
										index4--;
										cnt3++;
									}
									index4 = index5;
								}
								push2(&lsta,&lstb);
								write(1,"pa\n",3);
								swap1(&lsta);
								write(1,"sa\n",3);
								push1(&lstb, &lsta);
								write(1,"pb\n",3);
								nbelem2 = ft_comptelem(lstb);
								if (((nbelema - index3) / 2) < (index4 + 1 + 1))
								{
									while (cnt3 > 0)
									{
										reverse(&lstb);
										write(1,"rrb\n",4);
										cnt3--;
									}
								}
								if (((nbelema - index3) / 2) >= (index4 + 1 + 1))
								{
									while (cnt3 > 0)
									{
										rotate(&lstb);
										write(1,"rb\n",4);
										cnt3--;
									}
								}
								while(nbelem2 > 0)
								{
									push2(&lsta, &lstb);
									write(1,"pa\n",3);
									nbelem2--;
								}
							}
							else
							{
								swap1(&lsta);
								write(1,"sa\n",3);
							}
						}
					}
			}
			lstmp7 = lsta2;
			lsta2 = lsta2->next;
			free(lstmp7->content);
			lstmp7->content = NULL;
			free(lstmp7);
			lstmp7 = NULL;
			index3++;
		}
	}
	if(lsta2)
		ft_freelst(&lsta2);
}
