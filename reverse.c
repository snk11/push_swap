/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 16:11:31 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 17:00:05 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse2(int **tab)
{
	int		nbelem;
	int		w;
	int		i;

	nbelem = 0;
	w = (*tab)[nbelem - 1];
	i = 0;
	while (i < nbelem - 1)
	{
		(*tab)[i + 1] = (*tab)[i];
		i++;
	}
	(*tab)[i] = w;
}

void	reverse1(t_lst ***lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;

	lstmp2 = NULL;
	lstmp = NULL;
	if (**lsta && (**lsta)->next)
	{
		lstmp = **lsta;
		while ((**lsta)->next)
		{
			lstmp2 = **lsta;
			(**lsta) = (**lsta)->next;
		}
		if (lstmp2)
		{
			lstmp2->next = NULL;
			(**lsta)->next = lstmp;
		}
	}
}

void	reverse3(t_lst *****lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;

	lstmp2 = NULL;
	lstmp = NULL;
	if (****lsta && (****lsta)->next)
	{
		lstmp = ****lsta;
		while ((****lsta)->next)
		{
			lstmp2 = ****lsta;
			(****lsta) = (****lsta)->next;
		}
		if (lstmp2)
		{
			lstmp2->next = NULL;
			(****lsta)->next = lstmp;
		}
	}
}

void	reverse4(t_lst ****lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;

	lstmp2 = NULL;
	lstmp = NULL;
	if (***lsta && (***lsta)->next)
	{
		lstmp = ***lsta;
		while ((***lsta)->next)
		{
			lstmp2 = ***lsta;
			(***lsta) = (***lsta)->next;
		}
		if (lstmp2)
		{
			lstmp2->next = NULL;
			(***lsta)->next = lstmp;
		}
	}
}

void	reverse5(t_lst ******lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp2;

	lstmp2 = NULL;
	lstmp = NULL;
	if (*****lsta && (*****lsta)->next)
	{
		lstmp = *****lsta;
		while ((*****lsta)->next)
		{
			lstmp2 = *****lsta;
			(*****lsta) = (*****lsta)->next;
		}
		if (lstmp2)
		{
			lstmp2->next = NULL;
			(*****lsta)->next = lstmp;
		}
	}
}
