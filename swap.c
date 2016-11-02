/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:08:21 by syusof            #+#    #+#             */
/*   Updated: 2016/11/02 15:40:55 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"


void	swap2(int **tab1)
{
	int		w;

	if(tab1[0] && tab1[1])
	{
		w = *tab1[0];
		*tab1[0] = *tab1[1];
		*tab1[1] = *tab1[0];
	}
}

void	swap(t_lst **lsta)
{
	t_lst	*lstmp;

	lstmp = NULL;
	if (*lsta && (*lsta)->next)
	{
		lstmp = (*lsta)->next;
		(*lsta)->next = ((*lsta)->next)->next;
		//		lst_add_del(lsta, &lstmp);
		lst_add(lsta, &lstmp);
		//		ft_putstr("sw\n");
	}
}
