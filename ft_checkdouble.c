/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdouble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 16:37:40 by syusof            #+#    #+#             */
/*   Updated: 2016/11/09 15:43:49 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"




#include <stdio.h>
int		ft_checkdouble(t_lst *lsta,int d)
{
	while(lsta)
	{
		if(((t_numb*)(lsta->content))->val == d)
			return (0);
		lsta = lsta->next;
	}
	return (1);
}
