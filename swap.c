/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:08:21 by syusof            #+#    #+#             */
/*   Updated: 2015/06/13 14:53:46 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	swap(t_lst **lsta)
{
	t_lst	*lstmp;

	lstmp = NULL;
	if (lsta)
	{
		lstmp = (*lsta)->next;
		(*lsta)->next = (*lsta)->next->next;
		lstmp->next = (*lsta);
		*lsta = lstmp;
	}
}
