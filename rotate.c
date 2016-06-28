/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 14:00:53 by syusof            #+#    #+#             */
/*   Updated: 2016/06/28 12:12:53 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstbegi;
	
	lstmp = (*lsta);
	lstbegi = (*lsta)->next;
	while ((*lsta)->next)
		(*lsta) = (*lsta)->next;

	(*lsta)->next = lstmp;
	lstmp->next = NULL;
	(*lsta) = lstbegi;
}
