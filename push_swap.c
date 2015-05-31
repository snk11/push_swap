/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 17:22:30 by syusof            #+#    #+#             */
/*   Updated: 2015/05/31 19:09:17 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int arc,char **arv)
{
	t_lst	*e;

	e = NULL;
	if (arc < 2)
		write(1, "Error\n", 6);
	while (arc > 1)
	{
		lst_add(&e, create_lst(ft_atoi(arv[arc])));
		arc--;
	}
	return (0);
}
