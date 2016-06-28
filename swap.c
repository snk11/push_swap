/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:08:21 by syusof            #+#    #+#             */
/*   Updated: 2016/06/28 13:32:51 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"



# include <stdio.h>
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
		ft_putstr("sw\n");
	}
}
