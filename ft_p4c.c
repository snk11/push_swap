/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p4c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:05:39 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 13:47:06 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_p4c(t_lst ***lsta, int ac, char **av)
{
		if (ft_checkentryc(ac, av) == 0)
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

int			ft_p4c_p1(t_lst ****lsta,int ac,char **av)
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
	}
	else
	{
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add14(&lsta, lstmp);
	}
	return (1);
}