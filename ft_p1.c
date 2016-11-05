/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:04:20 by syusof            #+#    #+#             */
/*   Updated: 2016/11/05 15:15:12 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int			ft_p1(t_lst ***lsta,int ac,char **av)
{
	t_numb	*e;
	t_lst	*lstmp;

	e = NULL;
	if (!(e = (t_numb*)malloc(sizeof(t_numb))))
		return (0);
	e->val = ft_atoi(av[ac - 1]);
	if (ft_checkdouble(**lsta,e->val) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	lstmp = create_lst(e);
	free(e);
	e = NULL;
	lst_add9(&lsta, lstmp);
	ft_freelst(&lstmp);
	return (1);
}

