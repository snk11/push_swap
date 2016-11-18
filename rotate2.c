/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:02:48 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 17:05:45 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate5(t_lst ******lsta)
{
	t_lst	*lstmp;
	t_lst	*lstbegi;

	lstmp = NULL;
	lstbegi = NULL;
	if (*****lsta && (*****lsta)->next)
	{
		lstmp = (*****lsta);
		lstbegi = (*****lsta)->next;
		while ((*****lsta)->next)
			(*****lsta) = (*****lsta)->next;
		(*****lsta)->next = lstmp;
		lstmp->next = NULL;
		(*****lsta) = lstbegi;
	}
}
