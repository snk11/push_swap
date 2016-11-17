/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:42:28 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 13:48:12 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_p6(t_lst ***lsta, t_lst ***lstop)
{
	if(ft_comptelem(**lsta) == 2)
	{
		if(((t_numb*)(**lsta)->content)->val > ((t_numb*)((**lsta)->next)->content)->val)
		{
			swap1(&lsta);
			ft_lstop_add_down2(&lstop, 1);
			//				write(1,"sa\n",3);
		}
	}
}
