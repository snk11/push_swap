/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2015/06/12 22:10:38 by syusof           ###   ########.fr       */
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

	lsta = create_lst(NULL);
	if (!(lsta = (t_lst*)malloc(sizeof(t_lst))))
		return (0);
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
		lst_add(&lsta, create_lst(e));
		arc--;
	}
	ft_sort(&lsta);

		printf("%d",((t_numb*)lsta->content)->val);
		if (lsta == NULL)
		{
			printf("b1");
		}
	}
	return (0);
}
