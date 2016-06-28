/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 16:11:31 by syusof            #+#    #+#             */
/*   Updated: 2016/06/28 12:45:59 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;

	lstmp2 = NULL;
	lstmp = *lsta;
	while ((*lsta)->next)
	{
		lstmp2 = *lsta;
		(*lsta) = (*lsta)->next;
	}
	if (lstmp2)
	{
		lstmp2->next = NULL;
		(*lsta)->next = lstmp;
	}
}
