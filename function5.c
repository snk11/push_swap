/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:41:22 by syusof            #+#    #+#             */
/*   Updated: 2016/11/21 16:22:52 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_lstdel(t_lst *****toplist, int pos)
{
	t_lst		*lstmp;
	t_lst		*lstmp2;
	int			i;

	lstmp = NULL;
	lstmp2 = NULL;
	i = 0;
	lstmp2 = ****toplist;
	while (i < pos)
	{
		lstmp = lstmp2;
		lstmp2 = lstmp2->next;
		i++;
	}
	if (pos > 0)
		ft_lstdel_p1(&lstmp, &lstmp2);
	else if (pos == 0)
		ft_lstdel_p2(&toplist, &lstmp);
}

void		ft_lstdel_p1(t_lst **lstmp, t_lst **lstmp2)
{
	(*lstmp)->next = (*lstmp2)->next;
	free((*lstmp2)->content);
	(*lstmp2)->content = NULL;
	free((*lstmp2));
	*lstmp2 = NULL;
}

void		ft_lstdel_p2(t_lst ******toplist, t_lst **lstmp)
{
	*lstmp = *****toplist;
	*****toplist = (*****toplist)->next;
	free((*lstmp)->content);
	(*lstmp)->content = NULL;
	free(*lstmp);
	*lstmp = NULL;
}
