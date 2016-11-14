/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdel_op.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:20:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/14 14:04:08 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_checkdel_op(t_lst ***lstop)
{
	int		pos;
	t_lst	*lstopmp;

	lstopmp = **lstop;
	pos = 0;
	while (lstopmp)
	{
		if(((t_numb*)(lstopmp)->content)->val == 24)
		{
			if(ft_checkdel_op1(lstopmp))
			{
				ft_lstdel(&lstop, pos);
				ft_lstdel(&lstop,ft_getinxtodel(lstopmp, pos));
				ft_putnbr(ft_getinxtodel(lstopmp, pos));
				pos--;
			}
		}
		pos++;
		lstopmp = lstopmp->next;
	}
}

int		ft_checkdel_op1(t_lst *lstop)
{
	while (lstop && ((t_numb*)(lstop->content))->val == 24)
	{
		lstop = lstop->next;
	}
	if (lstop && ((t_numb*)(lstop->content))->val == 4)
		return (1);
	return (0);
}

int		ft_getinxtodel(t_lst *lstop, int pos)
{
	int		pos1;

	pos1 = pos;
	while (lstop && ((t_numb*)(lstop->content))->val == 24)
	{
		pos1++;
		lstop = lstop->next;
	}
	if (lstop && ((t_numb*)(lstop->content))->val == 4)
		return (pos1);
	return (-1);
}
