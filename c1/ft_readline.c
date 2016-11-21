/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:53:50 by syusof            #+#    #+#             */
/*   Updated: 2016/11/21 15:43:34 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	if (ft_strcmp(line, "pa") == 0)
	{
		if (***lstb)
			push13(&lsta, &lstb);
		return (1);
	}
	else if (ft_strcmp(line, "rra") == 0)
	{
		if (****lsta && ft_comptelem(****lsta) > 1)
			reverse5(&lsta);
		return (1);
	}
	return (0);
}

int		ft_readline_p2(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_strcmp(line, "ra") == 0)
	{
		if (****lsta && ft_comptelem(****lsta) > 1)
			rotate5(&lsta);
		return (1);
	}
	else if (ft_strcmp(line, "sa") == 0)
	{
		if (****lsta && ft_comptelem(****lsta) > 1)
			swap5(&lsta);
		return (1);
	}
	return (0);
}

int		ft_readline_p3(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_strcmp(line, "rrb") == 0)
	{
		if (***lstb && ft_comptelem(***lstb) > 1)
			reverse3(&lstb);
		return (1);
	}
	else if (ft_strcmp(line, "rb") == 0)
	{
		if (***lstb)
			rotate3(&lstb);
		return (1);
	}
	return (0);
}

int		ft_readline_p4(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_strcmp(line, "sb") == 0)
	{
		if (***lstb && ft_comptelem(***lstb) > 1)
			swap3(&lstb);
		return (1);
	}
	else if (ft_strcmp(line, "pb") == 0)
	{
		if (****lsta)
			push14(&lstb, &lsta);
		return (1);
	}
	return (0);
}
