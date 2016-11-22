/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:15:46 by syusof            #+#    #+#             */
/*   Updated: 2016/11/22 17:18:42 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlst(t_lst *lst1)
{
	while (lst1)
	{
		if (((t_numb*)(lst1)->content)->val == 1)
			write(1, "sa\n", 3);
		if (((t_numb*)(lst1)->content)->val == 2)
			write(1, "ra\n", 3);
		if (((t_numb*)(lst1)->content)->val == 3)
			write(1, "rra\n", 4);
		if (((t_numb*)(lst1)->content)->val == 4)
			write(1, "pa\n", 3);
		if (((t_numb*)(lst1)->content)->val == 22)
			write(1, "rb\n", 3);
		if (((t_numb*)(lst1)->content)->val == 23)
			write(1, "rrb\n", 4);
		if (((t_numb*)(lst1)->content)->val == 24)
			write(1, "pb\n", 3);
		lst1 = lst1->next;
	}
}

void	ft_printlstc(t_lst *lst1)
{
	while (lst1 && lst1->next)
	{
		if (((t_numb*)(lst1)->content)->val == 1)
			write(1, "sa\n", 3);
		if (((t_numb*)(lst1)->content)->val == 2)
			write(1, "ra\n", 3);
		if (((t_numb*)(lst1)->content)->val == 3)
			write(1, "rra\n", 4);
		if (((t_numb*)(lst1)->content)->val == 4)
			write(1, "pa\n", 3);
		if (((t_numb*)(lst1)->content)->val == 22)
			write(1, "rb\n", 3);
		if (((t_numb*)(lst1)->content)->val == 23)
			write(1, "rrb\n", 4);
		if (((t_numb*)(lst1)->content)->val == 24)
			write(1, "pb\n", 3);
		lst1 = lst1->next;
	}
	ft_printlstc_p1(lst1);
}

void	ft_printlstc_p1(t_lst *lst1)
{
	write(1, "\033[1;31m", 7);
	if (lst1)
	{
		if (((t_numb*)(lst1)->content)->val == 1)
			write(1, "sa\n", 3);
		if (((t_numb*)(lst1)->content)->val == 2)
			write(1, "ra\n", 3);
		if (((t_numb*)(lst1)->content)->val == 3)
			write(1, "rra\n", 4);
		if (((t_numb*)(lst1)->content)->val == 4)
			write(1, "pa\n", 3);
		if (((t_numb*)(lst1)->content)->val == 22)
			write(1, "rb\n", 3);
		if (((t_numb*)(lst1)->content)->val == 23)
			write(1, "rrb\n", 4);
		if (((t_numb*)(lst1)->content)->val == 24)
			write(1, "pb\n", 3);
		lst1 = lst1->next;
	}
	write(1, "\033[1;0m", 7);
}

void	ft_printlstf(t_lst *lsta)
{
	int		ind;

	ind = 0;
	while (lsta)
	{
		if (ind == 1)
			ft_putstr(" ");
		ind = 1;
		ft_putnbr(((t_numb*)lsta->content)->val);
		lsta = lsta->next;
	}
	if (ind == 1)
			ft_putstr("\n");
}
