/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdel_op.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:20:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 15:16:16 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_checkdel_op(t_lst ****lstop)
{
	int		pos;
	int		ind;
	t_lst	*lstopmp;

	ind = 1;
	while (ind == 1)
	{
		ind = 0;
		lstopmp = ***lstop;
		pos = 0;
		while (lstopmp && ind == 0)
		{
			if(((t_numb*)(lstopmp)->content)->val == 24)
			{
				if(ft_checkdel_op1(lstopmp))
				{
					lstopmp = NULL;
					ft_lstdel(&lstop, pos);
					ft_lstdel(&lstop, pos);
					ind = 1;
				}
			}
			pos++;
			if(lstopmp)
				lstopmp = lstopmp->next;
		}
	}
}

int		ft_checkdel_op1(t_lst *lstop)
{
	if (lstop && ((t_numb*)(lstop->content))->val == 24)
		lstop = lstop->next;
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
