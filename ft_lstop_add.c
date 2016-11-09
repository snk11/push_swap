/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstop_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:22:42 by syusof            #+#    #+#             */
/*   Updated: 2016/11/09 19:35:42 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstop_add1(t_lst *****lstop,int p)
{

	t_numb	*e;
	t_lst	*lstmp;

	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add13(&lstop, lstmp);
		ft_freelst(&lstmp);
}
