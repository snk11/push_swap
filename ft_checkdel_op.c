/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdel_op.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:20:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 13:25:00 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_checkdel_op(t_lst ****lstop)
{
	t_op	o;
	t_lst	*lstopmp;

	o.ind = 1;
	while (o.ind == 1)
	{
		lstopmp = ***lstop;
		ft_checkdel_op0(&(o.ind), &(o.pos));
		while (lstopmp && o.ind == 0)
		{
			if(((t_numb*)(lstopmp)->content)->val == 24)
			{
				if(ft_checkdel_op1(lstopmp))
				{
					lstopmp = NULL;
					ft_lstdel(&lstop, o.pos);
					ft_lstdel(&lstop, o.pos);
					o.ind = 1;
				}
			}
			o.pos++;
			if(lstopmp)
				lstopmp = lstopmp->next;
		}
	}
}

void	ft_checkdel_op0(int *ind, int *pos)
{
	*ind = 0;
	*pos = 0;
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
