/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 14:00:53 by syusof            #+#    #+#             */
/*   Updated: 2015/06/01 14:20:17 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_lst **lsta)
{
//	int	tmp;

//	tmp = ((*lsta)->content)->val;
//	((*lsta)->content)->val = ((*lsta)->next)->val


	t_lst	*lstmp;

	lstmp = NULL;
	if (lsta)
	{
		lstmp = (*lsta)->next;
		(*lsta)->next->next = (*lsta);
		(*lsta)->next = (*lsta)->next->next;
		(*lsta)= lstmp;
	}

	lstmp = (*lsta);
	(*lsta) = (*lsta)->next;
	while ((*lsta)->next->next != NULL)
	{
		(*lsta)->next = (*lsta)->next->next;
		(*lsta) = (*lsta)->next;

	lstmp = (*lsta);
	(*lsta) = (*lsta)->next;

	
	}
