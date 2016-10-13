/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 14:14:49 by syusof            #+#    #+#             */
/*   Updated: 2016/10/13 13:39:11 by syusof           ###   ########.fr       */
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

	if (ac < 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (ac > 1)
	{
		if (!(e = (t_numb*)malloc(sizeof(t_numb))))
			return (0);
		e->val = ft_atoi(av[ac - 1]);
		lstmp = create_lst(e);
		lst_add(&lsta, &lstmp);
		ac--;
	}
	while (get_next_line(0, &line) > 0)
	{
		if(ft_strcmp(line,"pa"))
		{
			if(lstb)
				push(&lsta,&lstb);
		}
		else if(ft_strcmp(line,"rra"))
		{
			if(lsta)
				reverse(&lsta);
		}
		else if(ft_strcmp(line,"ra"))
		{
			if(lsta)
				rotate(&lsta);
		}
		else if(ft_strcmp(line,"sa"))
		{
			if(lsta)
				swap(&lsta);
		}
		else if(ft_strcmp(line,"rrb"))
		{
			if(lstb)
				reverse(&lstb);
		}
		else if(ft_strcmp(line,"rb"))
		{
			if(lstb)
				rotate(&lstb);
		}
		else if(ft_strcmp(line,"sb"))
		{
			if(lstb)
				swap(&lstb);
		}
		else if(ft_strcmp(line,"pb"))
		{
			if(lsta)
				push(&lstb,&lsta);
		}
	}
	lstmp = lsta;
	r1 = 0;
	while(lstmp && lstmp->next && r1 == 0)
	{
		if(!(((t_numb*)(lstmp->content))->val <= ((t_numb*)((lstmp->next)->content))->val))
		{
			write(1,"KO",2);
			r1 = 1;
		}
		lstmp = lstmp->next;
	}
	if (r1 == 1)
		write(1,"OK",2);

}
