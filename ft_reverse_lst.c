/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 15:02:07 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:33:11 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*ft_reverse_lst(t_lst ***lstmp)
{
	t_numb	*e;
	t_lst	*lsta2;
	t_lst	*lstmp1;
	t_lst	*lstmp2;

	e = NULL;
	lstmp2 = NULL;
	lsta2 = NULL;
	lstmp1 = **lstmp;
	while (lstmp1)
	{
		e = (t_numb*)malloc(sizeof(t_numb));
		e->val = ((t_numb*)(lstmp1)->content)->val;
		lstmp2 = create_lst(e);
		lst_add5(&lsta2, lstmp2);
		lstmp1 = lstmp1->next;
		free(e);
		e = NULL;
		ft_freelst(&lstmp2);
	}
	ft_freelst4(&lstmp);
	return (lsta2);
}
