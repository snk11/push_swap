/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdel_op.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:20:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/14 12:53:55 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_checkdel_op(t_lst ***lstop)
{
	int		pos;

	pos = 0;
	while (**lstop)
	{
		if(((t_numb*)(**lstop)->content)->val == 24 && ft_checkdel_op1(**lstop))
			ft_lstdel(&lstop, pos);
		pos++;
	}
}

int		ft_checkdel_op1(t_lst *lstop)
{
	while (lstop)
	{
		while (lstop && ((t_numb*)(lstop->content))->val == 24)
			lstop = lstop->next;
	}
		if (lstop && ((t_numb*)(lstop->content))->val == 4)
			return (1);
	return (0);
}
