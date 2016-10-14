/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 14:14:49 by syusof            #+#    #+#             */
/*   Updated: 2016/10/14 13:56:07 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


#include <stdio.h>
int main(int ac,char **av)
{
	char	*line;
	t_lst	*lsta;
	t_lst	*lstb;
	t_lst	*lstmp;
	t_numb	*e;
	int		r1;

	lsta = NULL;
	lstb = NULL;
	lstmp = NULL;
	e = NULL;
	r1 = 0;

	if (ac <= 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (ac >= 2)
	{
		if(ft_checkint(av[ac - 1]) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		else
		{
			if (!(e = (t_numb*)malloc(sizeof(t_numb))))
				return (0);
			e->val = ft_atoi(av[ac - 1]);
			lstmp = create_lst(e);
			lst_add(&lsta, &lstmp);
		}
		ac--;
	}
	while (get_next_line(0, &line) > 0)
	{
		if(ft_strcmp(line,"pa") == 0)
		{
			if(lstb)
				push(&lsta,&lstb);
		}
		else if(ft_strcmp(line,"rra") == 0)
		{
			if(lsta)
				reverse(&lsta);
		}
		else if(ft_strcmp(line,"ra") == 0)
		{
			if(lsta)
				rotate(&lsta);
		}
		else if(ft_strcmp(line,"sa") == 0)
		{
			if(lsta)
				swap(&lsta);
		}
		else if(ft_strcmp(line,"rrb") == 0)
		{
			if(lstb)
				reverse(&lstb);
		}
		else if(ft_strcmp(line,"rb") == 0)
		{
			if(lstb)
				rotate(&lstb);
		}
		else if(ft_strcmp(line,"sb") == 0)
		{
			if(lstb)
				swap(&lstb);
		}
		else if(ft_strcmp(line,"pb") == 0)
		{
			if(lsta)
				push(&lstb,&lsta);
		}
		else
		{
			write(1,"KO\n",3);
			return (0);
		}
	}
	lstmp = lsta;
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
