/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 14:14:49 by syusof            #+#    #+#             */
/*   Updated: 2016/11/05 14:41:56 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


#include <stdio.h>
int main(int ac,char **av)
{
	char	*line;
	t_lst	**lsta;
	t_lst	*lstb;
	t_lst	*lstmp;
	t_numb	*e;
	int		r1;

	lsta = (t_lst**)malloc(sizeof(t_lst*));
	*lsta = NULL;
	lstb = NULL;
	lstmp = NULL;
	line = NULL;
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
		}
		ac--;
	}
	while (get_next_line(0, &line) > 0)
	{
		if(ft_strcmp(line,"pa") == 0)
		{
			if(lstb)
				push3(&lsta,&lstb);
		}
		else if(ft_strcmp(line,"rra") == 0)
		{
			if(*lsta)
				reverse1(&lsta);
		}
		else if(ft_strcmp(line,"ra") == 0)
		{
			if(*lsta)
				rotate1(&lsta);
		}
		else if(ft_strcmp(line,"sa") == 0)
		{
			if(*lsta)
				swap4(&lsta);
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
			if(*lsta)
				push4(&lstb,&lsta);
		}
		else
		{
			write(2,"Error\n",6);
			return (0);
		}
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
