/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:40:42 by syusof            #+#    #+#             */
/*   Updated: 2016/11/06 17:32:33 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_checksort(t_lst *lstb)
{
	int		i;
	t_lst	*lst1;

	lst1 = ft_copylst(lstb);
	i = 0;
	while(i < (ft_comptelem(lst1)) - 1)
	{
		//							ft_putstr("i = ");
		//							ft_putnbr(i);
		//							ft_putstr("\n");
		if(ft_comptelem(lst1) >= 2)
		{
			if(((t_numb*)(lst1)->content)->val > ((t_numb*)((lst1)->next)->content)->val)
			{
				swap(&lst1);
//				write(1,"sb\n",3);
				return (0);
			}
		}
		if(ft_comptelem((lst1)) >= 2)
		{
			rotate(&lst1);
//			write(1,"rb\n",3);
		}
		i++;
		//	ft_putstr("lstb = ");
		//	ft_printlst(lstb);
		//	ft_putstr("\n");
	}
	return (1);
}
