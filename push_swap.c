/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2015/05/31 19:57:05 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


#include <stdio.h>

int		main(int arc,char **arv)
{
	t_lst	*e;
	t_numb	*a;

	a = NULL;
	e = NULL;
	if (arc < 2)
		write(1, "Error\n", 6);
	while (arc > 1)
	{
		a = (t_numb*)malloc(sizeof(t_numb));
		a->val = ft_atoi(arv[arc - 1]);
		lst_add(&e, create_lst(a));
		arc--;
	}
	printf("%d",((t_numb*)e->content)->val);
	return (0);
}
