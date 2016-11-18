/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:15:38 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 17:16:55 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_readline_p5(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_comparestr(line, "ss") == 1)
	{
		if (***lsta)
			swap5(&lsta);
		else
			r->indko = 1;
		if (**lstb)
			swap3(&lstb);
		else
			r->indko = 1;
		return (1);
	}
	else if (ft_comparestr(line, "rr") == 1)
	{
		if (***lsta)
			rotate5(&lsta);
		else
			r->indko = 1;
		if (**lstb)
			rotate3(&lstb);
		else
			r->indko = 1;
		return (1);
	}
	return (0);
}

int		ft_readline_p6(t_lst *****lsta, t_lst ****lstb, t_read *r, char *line)
{
	if (ft_comparestr(line, "rrr") == 1)
	{
		if (***lsta)
			reverse5(&lsta);
		else
			r->indko = 1;
		if (**lstb)
			reverse3(&lstb);
		else
			r->indko = 1;
		return (1);
	}
	else
	{
		r->inderror = 1;
		return (1);
	}
	return (0);
}
