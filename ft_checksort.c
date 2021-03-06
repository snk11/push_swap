/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:40:42 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 15:25:27 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_checksort(t_lst *lstb)
{
	int		i;
	t_lst	*lst1;

	lst1 = ft_copylst(lstb);
	i = 0;
	while (i < (ft_comptelem(lst1)) - 1)
	{
		if (ft_comptelem(lst1) >= 2)
		{
			if (((t_numb*)(lst1)->content)->val
					> ((t_numb*)((lst1)->next)->content)->val)
			{
				swap(&lst1);
				ft_freelst(&lst1);
				return (0);
			}
		}
		if (ft_comptelem((lst1)) >= 2)
		{
			rotate(&lst1);
		}
		i++;
	}
	ft_freelst(&lst1);
	return (1);
}
