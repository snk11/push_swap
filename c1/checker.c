/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 14:14:49 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 20:46:27 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"







#include <stdio.h>
int main(int ac,char **av)
{
	char	*line;
	int		nbelema;
	t_lst	**lsta;
	t_lst	*lstb;
	t_lst	*lstmp;
	t_numb	*e;
	int		r1;
	int		indko;
	int		inderror;

	lsta = (t_lst**)malloc(sizeof(t_lst*));
	*lsta = NULL;
	lstb = NULL;
	lstmp = NULL;
	line = NULL;
	e = NULL;
	r1 = 0;
	nbelema = 0;
	indko = 0;
	inderror = 0;

	if(ac < 2)
		return (1);
	if (ac == 2)
	{
		if (ft_p5(ac, av) == 0)
			return (0);
		if(ft_parse1(&lsta,av[ac - 1]) == 0)
			return (0);
		*lsta = ft_reverse_lst(&lsta);
		/*
		if (ft_checkint(av[ac - 1]) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if(ft_parse1(&lsta,av[ac - 1]) == 0)
			return (0);
		*lsta = ft_reverse_lst(&lsta);
		*/
	}
	else if (ac > 2)
	{
		if(ft_p4(&lsta, ac, av) == 0)
			return (0);
		/*
		if(ft_checkentry(ac, av) == 0)
			return (0);
		else
		{
			while (ac >= 2)
			{
				if (!(e = (t_numb*)malloc(sizeof(t_numb))))
					return (0);
				e->val = ft_atoi(av[ac - 1]);
				if (ft_checkdouble(*lsta,e->val) == 0)
				{
					write(2, "Error\n", 6);
					return (0);
				}
				lstmp = create_lst(e);
				free(e);
				e = NULL;
				lst_add2(&lsta, lstmp);
				ft_freelst(&lstmp);
				ac--;
			}
		}
		*/
	}
	while (get_next_line(0, &line) > 0)
	{
		if(ft_checknothing(line))
		{
		}
		else if(ft_comparestr(line,"pa") == 1)
		{
			if(lstb)
				push3(&lsta,&lstb);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"rra") == 1)
		{
			if(*lsta)
				reverse1(&lsta);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"ra") == 1)
		{
			if(*lsta)
				rotate1(&lsta);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"sa") == 1)
		{
			if(*lsta)
				swap4(&lsta);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"rrb") == 1)
		{
			if(lstb)
				reverse(&lstb);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"rb") == 1)
		{
			if(lstb)
				rotate(&lstb);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"sb") == 1)
		{
			if(lstb)
				swap(&lstb);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"pb") == 1)
		{
			if(*lsta)
				push4(&lstb,&lsta);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"ss") == 1)
		{
			if(*lsta)
				swap4(&lsta);
			else
				indko = 1;
			if(lstb)
				swap(&lstb);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"rr") == 1)
		{
			if(*lsta)
				rotate1(&lsta);
			else
				indko = 1;
			if(lstb)
				rotate(&lstb);
			else
				indko = 1;
		}
		else if(ft_comparestr(line,"rrr") == 1)
		{
			if(*lsta)
				reverse1(&lsta);
			else
				indko = 1;
			if(lstb)
				reverse(&lstb);
			else
				indko = 1;
		}
		else
		{
			inderror = 1;
		}
		if(line)
		{
			free(line);
			line = NULL;
		}
	}
	if (inderror == 1)
	{
		write(2,"Error\n",6);
		return (0);
	}
	nbelema = ft_comptelem(*lsta);
	if (ft_comptelem(*lsta) != nbelema || indko == 1)
	{
		write(1,"KO\n",3);
		return (0);
	}
	lstmp = *lsta;
	while(lstmp && lstmp->next)
	{
		if(((t_numb*)(lstmp->content))->val > ((t_numb*)((lstmp->next)->content))->val)
		{
			write(1,"KO\n",3);
			return (0);
		}
		lstmp = lstmp->next;
	}
	write(1,"OK\n",3);
	return (1);
}
