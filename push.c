/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:33:57 by syusof            #+#    #+#             */
/*   Updated: 2016/06/28 13:10:48 by syusof           ###   ########.fr       */
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
				lstmp = create_lst((*lsta)->content);
				*lstb = lstmp;
				*lsta = (*lsta)->next;
			}
			else
				lst_add(lstb,lsta);
		}
}
