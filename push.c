/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:33:57 by syusof            #+#    #+#             */
/*   Updated: 2015/06/13 18:49:33 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_lst **lstb, t_lst **lsta)
{
	t_lst	*lstmp;

	if (lstb)
	{
		ft_putchar('a');
		lst_add(lstb,*lsta);
		ft_putchar('b');
		lstmp = *lsta;
		ft_putchar('c');
		*lsta = (*lsta)->next;
		ft_putchar('d');
//		free(lstmp);
	}
	lstmp = NULL;
}
