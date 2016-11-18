/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:33:57 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:57:44 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_lst **lstb, t_lst **lsta)
{
	t_lst	*lstmp;

	if (*lsta)
	{
		if (!(*lstb))
		{
			*lstb = *lsta;
			*lsta = (*lsta)->next;
			(*lstb)->next = NULL;
		}
		else
		{
			lst_add(lstb, lsta);
		}
	}
}

void	push1(t_lst **lstb, t_lst ****lsta)
{
	t_lst	*lstmp;

	if (***lsta)
	{
		if (!(*lstb))
		{
			*lstb = ***lsta;
			***lsta = (***lsta)->next;
			(*lstb)->next = NULL;
		}
		else
		{
			lst_add3(lstb, &lsta);
		}
	}
}

void	push2(t_lst ****lstb, t_lst **lsta)
{
	t_lst	*lstmp;

	if (*lsta)
	{
		if (!(***lstb))
		{
			***lstb = *lsta;
			*lsta = (*lsta)->next;
			(***lstb)->next = NULL;
		}
		else
		{
			lst_add6(&lstb, &lsta);
		}
	}
}

void	push3(t_lst ***lstb, t_lst **lsta)
{
	t_lst	*lstmp;

	if (*lsta)
	{
		if (!(**lstb))
		{
			**lstb = *lsta;
			*lsta = (*lsta)->next;
			(**lstb)->next = NULL;
		}
		else
		{
			lst_add7(&lstb, &lsta);
		}
	}
}

void	push4(t_lst **lstb, t_lst ***lsta)
{
	t_lst	*lstmp;

	if (**lsta)
	{
		if (!(*lstb))
		{
			*lstb = **lsta;
			**lsta = (**lsta)->next;
			(*lstb)->next = NULL;
		}
		else
		{
			lst_add8(&lstb, &lsta);
		}
	}
}
