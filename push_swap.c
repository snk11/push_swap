/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2015/06/12 18:16:17 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


#include <stdio.h>

int		main(int arc,char **arv)
{
	t_lst	*lsta;
	t_numb	*e;

	lsta = NULL;
	e = NULL;

	lsta = (t_lst*)malloc(sizeof(t_lst));
	if (arc < 2)
		write(1, "Error\n", 6);
	while (arc > 1)
	{
		e = (t_numb*)malloc(sizeof(t_numb));
		e->val = ft_atoi(arv[arc - 1]);
		lst_add(&lsta, create_lst(e));
		arc--;
	}
	ft_sort(&lsta);
	printf("%d",((t_numb*)lsta->content)->val);
	return (0);
}
