/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:33:57 by syusof            #+#    #+#             */
/*   Updated: 2015/06/16 00:28:30 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"




#include <stdio.h>
void	push(t_lst **lstb, t_lst **lsta)
{
//	t_lst	*lstmp;

		lst_add(lstb,*lsta);
//		lstmp = *lsta;
//		if ((*lsta)->next == NULL)
//			*lsta = NULL;
//		else
			*lsta = (*lsta)->next;
//	printf("%d\n",((t_numb*)(*lsta)->content)->val);
//		lstmp->next = NULL;
//		free(lstmp);
//		lstmp = NULL;
}
