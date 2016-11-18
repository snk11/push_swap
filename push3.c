/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:54:54 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:57:05 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push10(t_lst ***lstb, t_lst ****lsta)
{
	t_lst	*lstmp;

	if (***lsta)
	{
		if (!(**lstb))
		{
			**lstb = ***lsta;
			***lsta = (***lsta)->next;
			(**lstb)->next = NULL;
		}
		else
		{
			lst_add18(&lstb, &lsta);
		}
	}
}

void	push11(t_lst *****lstb, t_lst ****lsta)
{
	t_lst	*lstmp;

	if (***lsta)
	{
		if (!(****lstb))
		{
			****lstb = ***lsta;
			***lsta = (***lsta)->next;
			(****lstb)->next = NULL;
		}
		else
		{
			lst_add19(&lstb, &lsta);
		}
	}
}

void	push12(t_lst ****lstb, t_lst *****lsta)
{
	t_lst	*lstmp;

	if (****lsta)
	{
		if (!(***lstb))
		{
			***lstb = ****lsta;
			****lsta = (****lsta)->next;
			(***lstb)->next = NULL;
		}
		else
		{
			lst_add20(&lstb, &lsta);
		}
	}
}

void	push13(t_lst ******lstb, t_lst *****lsta)
{
	t_lst	*lstmp;

	if (****lsta)
	{
		if (!(*****lstb))
		{
			*****lstb = ****lsta;
			****lsta = (****lsta)->next;
			(*****lstb)->next = NULL;
		}
		else
		{
			lst_add21(&lstb, &lsta);
		}
	}
}

void	push14(t_lst *****lstb, t_lst ******lsta)
{
	t_lst	*lstmp;

	if (*****lsta)
	{
		if (!(****lstb))
		{
			****lstb = *****lsta;
			*****lsta = (*****lsta)->next;
			(****lstb)->next = NULL;
		}
		else
		{
			lst_add22(&lstb, &lsta);
		}
	}
}
