/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 14:00:53 by syusof            #+#    #+#             */
/*   Updated: 2016/11/06 10:57:12 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate2(int **tab)
{
	int nbelem;
	int w;
	int		i;

	nbelem = 0;
//	nbelem = ft_countelemtab(*tab);
	w = (*tab)[0];
	i = nbelem;
	while(i > 0)
	{
		(*tab)[i - 1] = (*tab)[i];
		i--;
	}
	(*tab)[nbelem-1] = w;
}

void	rotate(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstbegi;
	
	lstmp = NULL;
	lstbegi = NULL;
	if (*lsta && (*lsta)->next)
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

void	rotate1(t_lst ***lsta)
{
	t_lst	*lstmp;
	t_lst	*lstbegi;
	
	lstmp = NULL;
	lstbegi = NULL;
	if (**lsta && (**lsta)->next)
	{
		lstmp = (**lsta);
		lstbegi = (**lsta)->next;
		while ((**lsta)->next)
			(**lsta) = (**lsta)->next;

		(**lsta)->next = lstmp;
		lstmp->next = NULL;
		(**lsta) = lstbegi;
	}
}

void	rotate3(t_lst *****lsta)
{
	t_lst	*lstmp;
	t_lst	*lstbegi;
	
	lstmp = NULL;
	lstbegi = NULL;
	if (****lsta && (****lsta)->next)
	{
		lstmp = (****lsta);
		lstbegi = (****lsta)->next;
		while ((****lsta)->next)
			(****lsta) = (****lsta)->next;

		(****lsta)->next = lstmp;
		lstmp->next = NULL;
		(****lsta) = lstbegi;
	}
}

void	rotate4(t_lst ****lsta)
{
	t_lst	*lstmp;
	t_lst	*lstbegi;
	
	lstmp = NULL;
	lstbegi = NULL;
	if (***lsta && (***lsta)->next)
	{
		lstmp = (***lsta);
		lstbegi = (***lsta)->next;
		while ((***lsta)->next)
			(***lsta) = (***lsta)->next;

		(***lsta)->next = lstmp;
		lstmp->next = NULL;
		(***lsta) = lstbegi;
	}
}
