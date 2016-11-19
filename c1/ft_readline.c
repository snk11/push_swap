/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:53:50 by syusof            #+#    #+#             */
/*   Updated: 2016/11/19 07:07:07 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"




#include <stdio.h>
void	ft_readline(char *line, t_lst ****lsta, t_lst ***lstb, t_read *r)
{
	if (ft_checknothing(line))
	{
	}
	else if (ft_readline_p1(&lsta, &lstb, r, line) == 1)
	{
	}
	else if (ft_readline_p2(&lsta, &lstb, r, line) == 1)
	{
	}
	else if (ft_readline_p3(&lsta, &lstb, r, line) == 1)
	{
	}
	else if (ft_readline_p4(&lsta, &lstb, r, line) == 1)
	{
	}
	else if (ft_readline_p5(&lsta, &lstb, r, line) == 1)
	{
	}
	else if (ft_readline_p6(&lsta, &lstb, r, line) == 1)
	{
	}
}

int		ft_readline_p1(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_comparestr(line, "pa") == 1)
	{
		if (***lstb)
			push13(&lsta, &lstb);
		else
			r->indko = 1;
		return (1);
	}
	else if (ft_comparestr(line, "rra") == 1)
	{
		if (****lsta && ft_comptelem(****lsta) > 1)
			reverse5(&lsta);
		else
			r->indko = 1;
		return (1);
	}
	return (0);
}

int		ft_readline_p2(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_comparestr(line, "ra") == 1)
	{
		if (****lsta && ft_comptelem(****lsta) > 1)
			rotate5(&lsta);
		else
			r->indko = 1;
		return (1);
	}
	else if (ft_comparestr(line, "sa") == 1)
	{
		if (****lsta && ft_comptelem(****lsta) > 1)
			swap5(&lsta);
		else
			r->indko = 1;
		return (1);
	}
	return (0);
}

int		ft_readline_p3(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_comparestr(line, "rrb") == 1)
	{
		if (***lstb && ft_comptelem(***lstb) > 1)
			reverse3(&lstb);
		else
			r->indko = 1;
		return (1);
	}
	else if (ft_comparestr(line, "rb") == 1)
	{
		if (***lstb)
			rotate3(&lstb);
		else
			r->indko = 1;
		return (1);
	}
	return (0);
}

int		ft_readline_p4(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_comparestr(line, "sb") == 1)
	{
		if (***lstb && ft_comptelem(***lstb) > 1)
			swap3(&lstb);
		else
			r->indko = 1;
		return (1);
	}
	else if (ft_comparestr(line, "pb") == 1)
	{
		if (****lsta)
			push14(&lstb, &lsta);
		else
			r->indko = 1;
		return (1);
	}
	return (0);
}
