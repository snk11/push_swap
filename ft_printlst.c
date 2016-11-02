/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 13:36:17 by syusof            #+#    #+#             */
/*   Updated: 2016/11/01 03:17:30 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"




#include <stdio.h>
void	ft_printlst(t_lst *lsta)
{
	if (lsta == NULL)
		printf("lst NULL\n");

	while (lsta)
	{
		printf("%d ",lsta->val);
		lsta = lsta->next;
	}
	printf("\n");
}