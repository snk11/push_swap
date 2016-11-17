/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:53:50 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 21:30:49 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



#include <stdio.h>
void		ft_readline(char *line, t_lst ***lsta,t_lst **lstb, t_read *r)
{
		if(ft_checknothing(line))
		{
		}
		else if(ft_comparestr(line,"pa") == 1)
		{
			if(*lstb)
				push9(&lsta,&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rra") == 1)
		{
			if(**lsta)
				reverse4(&lsta);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"ra") == 1)
		{
			if(**lsta)
				rotate4(&lsta);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"sa") == 1)
		{
			if(**lsta)
				swap1(&lsta);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rrb") == 1)
		{
			if(*lstb)
				reverse1(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rb") == 1)
		{
			if(*lstb)
				rotate1(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"sb") == 1)
		{
			if(*lstb)
				swap4(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"pb") == 1)
		{
			if(**lsta)
				push10(&lstb,&lsta);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"ss") == 1)
		{
			if(**lsta)
				swap1(&lsta);
			else
				r->indko = 1;
			if(*lstb)
				swap4(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rr") == 1)
		{
			if(**lsta)
				rotate4(&lsta);
			else
				r->indko = 1;
			if(*lstb)
				rotate1(&lstb);
			else
				r->indko = 1;
		}
		else if(ft_comparestr(line,"rrr") == 1)
		{
			if(**lsta)
				reverse4(&lsta);
			else
				r->indko = 1;
			if(*lstb)
				reverse1(&lstb);
			else
				r->indko = 1;
		}
		else
		{
			r->inderror = 1;
		}
}

