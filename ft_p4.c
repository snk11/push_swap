/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:38:58 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 18:05:28 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"





#include <stdio.h>
int		ft_p4(t_lst ***lsta, int ac, char **av)
{
		if (ft_checkentry(ac, av) == 0)
			return (0);
		else
		{
			while (ac >= 2)
			{
					if (ft_p4_p1(&lsta, ac, av) == 0)
						return (0);
				ac--;
			}
		}
		return (1);
}

int			ft_p4_p1(t_lst ****lsta,int ac,char **av)
{
	t_numb	*e;
	t_lst	*lstmp;

	e = NULL;
	if (!(e = (t_numb*)malloc(sizeof(t_numb))))
		return (0);
	e->val = ft_atoi(av[ac - 1]);
	if (ft_checkdouble(***lsta,e->val) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if(ft_strcmp(av[ac-1],"256") == 0)
	{
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add14(&lsta, lstmp);
		((t_numb*)((***lsta)->content))->val = 256;
//		ft_freelst(&lstmp);
	}
	else
	{
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add14(&lsta, lstmp);
//		ft_freelst(&lstmp);
	}
	return (1);
}
