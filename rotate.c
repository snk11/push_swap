/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 14:00:53 by syusof            #+#    #+#             */
/*   Updated: 2016/10/13 12:08:03 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstbegi;
	
	lstmp = NULL;
	lstbegi = NULL;
	if (*lsta)
	{
		lstmp = (*lsta);
		lstbegi = (*lsta)->next;
		while ((*lsta)->next)
			(*lsta) = (*lsta)->next;

		(*lsta)->next = lstmp;
		lstmp->next = NULL;
		(*lsta) = lstbegi;
	}
}
