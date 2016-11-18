/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:54:48 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:58:06 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push5(t_lst ***lstb, t_lst *****lsta)
{
	t_lst	*lstmp;

	if (****lsta)
	{
		if (!(**lstb))
		{
			**lstb = ****lsta;
			****lsta = (****lsta)->next;
			(**lstb)->next = NULL;
		}
		else
		{
			lst_add10(&lstb, &lsta);
		}
	}
}

void	push6(t_lst *****lstb, t_lst ***lsta)
{
	t_lst	*lstmp;

	if (**lsta)
	{
		if (!(****lstb))
		{
			****lstb = **lsta;
			**lsta = (**lsta)->next;
			(****lstb)->next = NULL;
		}
		else
		{
			lst_add11(&lstb, &lsta);
		}
	}
}

void	push7(t_lst ******lstb, t_lst ****lsta)
{
	t_lst	*lstmp;

	if (***lsta)
	{
		if (!(*****lstb))
		{
			*****lstb = ***lsta;
			***lsta = (***lsta)->next;
			(*****lstb)->next = NULL;
		}
		else
		{
			lst_add12(&lstb, &lsta);
		}
	}
}

void	push8(t_lst *******lstb, t_lst *****lsta)
{
	t_lst	*lstmp;

	if (****lsta)
	{
		if (!(******lstb))
		{
			******lstb = ****lsta;
			****lsta = (****lsta)->next;
			(******lstb)->next = NULL;
		}
		else
		{
			lst_add16(&lstb, &lsta);
		}
	}
}

void	push9(t_lst ****lstb, t_lst ***lsta)
{
	t_lst	*lstmp;

	if (**lsta)
	{
		if (!(***lstb))
		{
			***lstb = **lsta;
			**lsta = (**lsta)->next;
			(***lstb)->next = NULL;
		}
		else
		{
			lst_add17(&lstb, &lsta);
		}
	}
}
