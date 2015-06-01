/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:08:21 by syusof            #+#    #+#             */
/*   Updated: 2015/06/01 14:00:41 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	swap(t_lst **lsta)
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
}
