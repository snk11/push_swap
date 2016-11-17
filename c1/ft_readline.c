/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:53:50 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 22:28:59 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



#include <stdio.h>
void		ft_readline(char *line, t_lst ****lsta,t_lst ***lstb, t_read *r)
{
		if(ft_checknothing(line))
		{
		}
		else if(ft_comparestr(line,"pa") == 1)
		{
			if(**lstb)
				push11(&lsta,&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rra") == 1)
		{
			if(***lsta)
				reverse3(&lsta);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"ra") == 1)
		{
			if(***lsta)
				rotate3(&lsta);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"sa") == 1)
		{
			if(***lsta)
				swap3(&lsta);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rrb") == 1)
		{
			if(**lstb)
				reverse4(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rb") == 1)
		{
			if(**lstb)
				rotate4(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"sb") == 1)
		{
			if(**lstb)
				swap1(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"pb") == 1)
		{
			if(***lsta)
				push12(&lstb,&lsta);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"ss") == 1)
		{
			if(***lsta)
				swap3(&lsta);
			else
				r->indko = 1;
			if(**lstb)
				swap1(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rr") == 1)
		{
			if(***lsta)
				rotate3(&lsta);
			else
				r->indko = 1;
			if(**lstb)
				rotate4(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rrr") == 1)
		{
			if(***lsta)
				reverse3(&lsta);
			else
				r->indko = 1;
			if(**lstb)
				reverse4(&lstb);
			else
				r->indko = 1;
		}
		else
		{
			r->inderror = 1;
		}
}

