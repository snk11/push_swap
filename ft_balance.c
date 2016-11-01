/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_balance.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 15:06:31 by syusof            #+#    #+#             */
/*   Updated: 2016/11/01 03:15:44 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



#include <stdio.h>
int	ft_balance(t_lst **lstmp2,void (*f)(t_lst**))
{
	int r1;
	int	cnt1;
	t_lst	*lstmp;
	r1 = 0;
	cnt1 = 0;
	while(r1 == 0)
	{
		lstmp = *lstmp2;
		r1 = 1;
		while(lstmp && lstmp->next)
			lstmp = lstmp->next;
		if(*lstmp2 && lstmp && *lstmp2 != lstmp && ((*lstmp2)->val > (lstmp)->val))
		{
			f(lstmp2);
			r1 = 0;
			cnt1++;
		}
	}
	return cnt1;
}

int	ft_balance2(t_lst **lstmp2,void (*f)(t_lst**))
{
	int r1;
	int	cnt1;
	t_lst	*lstmp;
	r1 = 0;
	cnt1 = 0;
	while(r1 == 0)
	{
		lstmp = *lstmp2;
		r1 = 1;
		while(lstmp && lstmp->next)
			lstmp = lstmp->next;
		if(*lstmp2 && lstmp && *lstmp2 != lstmp && ((*lstmp2)->val < (lstmp)->val))
		{
			f(lstmp2);
			r1 = 0;
			cnt1++;
		}
	}
	return cnt1;
}
