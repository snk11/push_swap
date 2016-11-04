/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copylst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 14:38:21 by syusof            #+#    #+#             */
/*   Updated: 2016/11/04 18:01:20 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*ft_copylst(t_lst *lstmp)
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
		lst_add_down2(&lsta2, lstmp2);
		lstmp = lstmp->next;
		free(e);
		e = NULL;
		ft_freelst(&lstmp2);
	}
	return lsta2;
}
