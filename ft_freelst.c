/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:10:09 by syusof            #+#    #+#             */
/*   Updated: 2016/11/04 18:10:44 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ft_freelst(t_lst **lst1)
{
	t_lst	*lstmp;
	lstmp = NULL;
	while(*lst1 && (*lst1)->next)
	{
		lstmp = *lst1;
		(*lst1) = (*lst1)->next;
		free(lstmp->content);
		lstmp->content = NULL;
		free(lstmp);
		lstmp = NULL;
	}
	if(*lst1)
	{
		free((*lst1)->content);
		(*lst1)->content = NULL;
		free(*lst1);
		*lst1 = NULL;
	}
}
