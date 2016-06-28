/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2016/06/28 13:48:49 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


#include <stdio.h>

int		main(int arc,char **arv)
{
	t_lst	*lsta;
	t_lst	*lstmp;
	t_numb	*e;

	lsta = NULL;
	lstmp = NULL;
	e = NULL;

	if (arc < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (arc > 1)
	{
		if (!(e = (t_numb*)malloc(sizeof(t_numb))))
			return (0);
		e->val = ft_atoi(arv[arc - 1]);
		lstmp = create_lst(e);
		lst_add(&lsta, &lstmp);
		arc--;
	}
	ft_sort(&lsta);
	//lsta = sort_list(lsta,croissant);
	while (lsta)
	{
		printf("%d\n",((t_numb*)lsta->content)->val);
		lsta = lsta->next;
	}
	return (0);
}
