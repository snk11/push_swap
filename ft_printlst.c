/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:15:46 by syusof            #+#    #+#             */
/*   Updated: 2016/11/14 14:13:05 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	ft_printlst(t_lst *lst1)
{
	while(lst1)
	{
		ft_putnbr(((t_numb*)(lst1)->content)->val);
		ft_putstr("\n");
		lst1 = lst1->next;
	}
}
*/
void	ft_printlst(t_lst *lst1)
{
	while(lst1)
	{
		if(((t_numb*)(lst1)->content)->val == 1)
			write(1,"sa\n",3);
		if(((t_numb*)(lst1)->content)->val == 2)
			write(1,"ra\n",3);
		if(((t_numb*)(lst1)->content)->val == 3)
			write(1,"rra\n", 4);
		if(((t_numb*)(lst1)->content)->val == 4)
			write(1,"pa\n",3);
		if(((t_numb*)(lst1)->content)->val == 22)
			write(1,"rb\n",3);
		if(((t_numb*)(lst1)->content)->val == 23)
			write(1,"rrb\n", 4);
		if(((t_numb*)(lst1)->content)->val == 24)
			write(1,"pb\n",3);
		lst1 = lst1->next;
	}
}
