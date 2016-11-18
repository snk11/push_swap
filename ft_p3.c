/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:31:42 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 13:46:23 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_p3(t_lst ***lsta, t_lst ***lstop)
{
	if(ft_comptelem(**lsta) == 2)
	{
		if(((t_numb*)(**lsta)->content)->val
				> ((t_numb*)((**lsta)->next)->content)->val)
		{
			swap1(&lsta);
			ft_lstop_add_down2(&lstop, 1);
		}
	}
}
