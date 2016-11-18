/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:30:23 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:31:23 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_quicksort(t_lst ***lsta, t_lst ***lstop)
{
	int		index;
	int		indexpivot;
	int		valpivot;
	t_lst	*lstb;

	lstb = NULL;
	ft_slide_a(&lsta, &lstop);
	if (ft_checksort(**lsta) == 0)
	{
		while (**lsta)
		{
			valpivot = get_valpivot(**lsta);
			indexpivot = get_indexpivot(**lsta, valpivot);
			while (**lsta && get_indextopush2(**lsta, valpivot) != -1)
			{
				index = get_indextopush2(**lsta, valpivot);
				if (ft_comptelem(**lsta) % 2 == 0)
					ft_quicksort_p1(&lsta, &lstb, &lstop, index);
				else if (ft_comptelem(**lsta) % 2 != 0)
					ft_quicksort_p2(&lsta, &lstb, &lstop, index);
			}
		}
		ft_insertionsort2(&lsta, &lstb, &lstop);
	}
}

void		ft_quicksort_p1(t_lst ****lsta, t_lst **lstb, t_lst ****lstop,
		int index)
{
	int		i;
	int		nbelema;

	nbelema = ft_comptelem(***lsta);
	i = 0;
	if (index < nbelema / 2)
	{
		while (i < index)
		{
			rotate3(&lsta);
			ft_lstop_add_down1(&lstop, 2);
			i++;
		}
	}
	else if (index >= nbelema / 2)
	{
		while (i < nbelema - index)
		{
			reverse3(&lsta);
			ft_lstop_add_down1(&lstop, 3);
			i++;
		}
	}
	push5(&lstb, &lsta);
	ft_lstop_add_down1(&lstop, 24);
}

void		ft_quicksort_p2(t_lst ****lsta, t_lst **lstb, t_lst ****lstop,
		int index)
{
	int		i;
	int		nbelema;

	nbelema = ft_comptelem(***lsta);
	i = 0;
	if (index <= nbelema / 2)
	{
		while (i < index)
		{
			rotate3(&lsta);
			ft_lstop_add_down1(&lstop, 2);
			i++;
		}
	}
	else if (index > nbelema / 2)
	{
		while (i < nbelema - index)
		{
			reverse3(&lsta);
			ft_lstop_add_down1(&lstop, 3);
			i++;
		}
	}
	push5(&lstb, &lsta);
	ft_lstop_add_down1(&lstop, 24);
}
