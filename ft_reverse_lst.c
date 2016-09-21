/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 15:02:07 by syusof            #+#    #+#             */
/*   Updated: 2016/09/21 15:07:29 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_lst	*ft_reverse_lst(t_lst *lstmp)
{
	t_numb	*e;
	t_lst	*lsta2;
	t_lst	*lstmp2;

	lstmp2 = NULL;
	lsta2 = NULL;
	while(lstmp)
	{
		e = (t_numb*)malloc(sizeof(t_numb));
		e->val = ((t_numb*)(lstmp)->content)->val;
		lstmp2 = create_lst(e);
		lst_add(&lsta2, &lstmp2);
		lstmp = lstmp->next;
	}
	return lsta2;
}
