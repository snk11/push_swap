/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:21:40 by syusof            #+#    #+#             */
/*   Updated: 2016/11/05 14:04:35 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"



#include <stdio.h>
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
	t_lst	*lstmp;
	t_lst	*lstmp2;
	t_lst	*lstmp3;
	t_lst	*lstmp4;
	t_lst	*lstmp5;
//	t_lst	*lstmp6;
	t_lst	*lstmp7;
//	t_lst	**lstmp8;
	t_lst	*lstmp9;
	t_lst	*lstmp12;
	t_lst	*lsta2;
	int		ind1;
	int		ind2;
	int		index;
	int		index2;
	int		index3;
	int		index4;
	int		index5;
	int		nbelem;
	int		nbelem2;
	int		nbelem3;
	int		nbelemc;
	int		nbelema;
	int		r1;
	int		cnt1;
	int		cnt2;
	int		cnt3;
	t_lst	*lstb;
	t_numb	*e;

//	lstmp8 = (t_lst**)malloc(sizeof(t_lst*));
	index = 0;
	index2 = 0;
	index4 = 0;
	index5 = 0;
	lstmp = NULL;
	lstmp2 = NULL;
	lstmp3 = NULL;
	lstmp4 = NULL;
	lstmp5 = NULL;
//	lstmp6 = NULL;
	lstmp7 = NULL;
	lstmp9 = NULL;
	lsta2 = NULL;
	e = NULL;
	r1 = 0;
	cnt1 = 0;
	cnt2 = 0;
	cnt3 = 0;

	int bug = 0;
	int		a;
	int		b;

	int n;

	lstb = NULL;
//	*lstmp8 = NULL;


	lsta2 = ft_reverse_lst(**lsta);
//	lstmp6 = ft_copylst(**lsta);
	nbelema = ft_comptelem(**lsta);
	nbelemc = ft_comptelem(lsta2);
//	ft_freelst(&lsta2);
	ind1 = 1;
	ind2 = 0;
//	ft_freelst(&lstmp6);
//	ft_freelst(&lsta2);
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
				bug++;
//				lstmp = lstmp6;
				nbelemc = ft_comptelem(lsta2);
//				lstmp = lstmp6;
				index = nbelemc - 1;
				if  (**lsta)
				{
					index4 = get_indexquick(**lsta,nbelemc,lsta2);
				}
					if (index4 > -1)
					{
						ind1 = 1;
						//						if (((t_numb*)lsta2->content)->val < ((t_numb*)(lstmp)->content)->val)
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
//			ft_freelst(&lsta2);
			index3++;
		}
	}
//	ft_printlst(lstmp6);
	if(lsta2)
		ft_freelst(&lsta2);
	/*
	t_lst *lstmp6begi;

	lstmp6begi = lstmp6;

	while(lstmp6)
	{
		lst_add_down2(lst1,lstmp6);
		lstmp6 = lstmp6->next;
	}
	ft_freelst(&lstmp6begi);
	free(lstmp8);
	*/
}
