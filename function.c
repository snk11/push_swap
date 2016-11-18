/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 18:32:04 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 20:43:25 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_comptelem(t_lst *lsta)
{
	int		nb;

	nb = 0;
	if (lsta)
	{
		nb = 1;
		while (lsta)
		{
			nb++;
			lsta = lsta->next;
		}
	}
	else
		return (0);
	return (nb - 1);
}

void		lst_add(t_lst **toplist, t_lst **lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (*toplist == NULL)
	{
		lstmp = *lst1;
		*lst1 = (*lst1)->next;
		*toplist = lstmp;
		(*toplist)->next = NULL;
	}
	else
	{
		lstmp = *lst1;
		*lst1 = (*lst1)->next;
		lstmp->next = *toplist;
		*toplist = lstmp;
	}
}

void		lst_add3(t_lst **toplist, t_lst *****lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (*toplist == NULL)
	{
		lstmp = ****lst1;
		****lst1 = (****lst1)->next;
		*toplist = lstmp;
		(*toplist)->next = NULL;
	}
	else
	{
		lstmp = ****lst1;
		****lst1 = (****lst1)->next;
		lstmp->next = *toplist;
		*toplist = lstmp;
	}
}

void		lst_add4(t_lst *****toplist, t_lst **lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (****toplist == NULL)
	{
		lstmp = *lst1;
		*lst1 = (*lst1)->next;
		****toplist = lstmp;
		(****toplist)->next = NULL;
	}
	else
	{
		lstmp = *lst1;
		*lst1 = (*lst1)->next;
		lstmp->next = ****toplist;
		****toplist = lstmp;
	}
}
