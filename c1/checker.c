/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 14:14:49 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 11:10:52 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"







#include <stdio.h>
int main(int ac,char **av)
{
	t_lst	**lsta;
	t_lst	*lstb;
	t_read	r;

	ft_checker_p1(&lsta, &lstb, &r);
	if(ac < 2)
		return (1);
	if (ac == 2)
	{
		if (ft_p5c(ac, av) == 0)
			return (0);
		if(ft_parse1c(&lsta,av[ac - 1]) == 0)
			return (0);
		*lsta = ft_reverse_lst(&lsta);
	}
	else if (ac > 2)
	{
		if(ft_p4c(&lsta, ac, av) == 0)
			return (0);
	}
	if (ft_checker_p2(&lsta, &lstb, &r) == 0)
		return (0);
	/*
	while (get_next_line(0, &line) > 0)
	{
		ft_readline(line, &lsta, &lstb, &r);
		if(line)
		{
			free(line);
			line = NULL;
		}
	}
	if (r.inderror == 1)
	{
		write(2,"Error\n",6);
		return (0);
	}
	r.nbelema = ft_comptelem(*lsta);
	if (ft_comptelem(*lsta) != r.nbelema || r.indko == 1)
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
	*/
	return (1);
}
