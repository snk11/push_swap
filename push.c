/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:33:57 by syusof            #+#    #+#             */
/*   Updated: 2016/11/01 03:21:05 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_lst **lstb, t_lst **lsta)
{
	t_lst	*lstmp;

	if (*lsta)
	{

		if(!(*lstb))
		{
			lstmp = create_lst((*lsta)->val);
			*lstb = lstmp;
			*lsta = (*lsta)->next;
		}
		else
			lst_add(lstb,lsta);
	}
}
