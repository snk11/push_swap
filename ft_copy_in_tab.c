/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:54:52 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 15:26:18 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_copy_in_tab(t_lst *lsta, int **tab)
{
	int	i;

	i = 0;
	while (lsta && lsta->next)
	{
		(*tab)[i] = ((t_numb*)lsta->content)->val;
		i++;
		lsta = lsta->next;
	}
	if (lsta)
	{
		(*tab)[i] = ((t_numb*)lsta->content)->val;
	}
}
