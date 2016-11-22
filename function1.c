/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:39:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/22 14:52:16 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		lst_add6(t_lst *****toplist, t_lst ***lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (****toplist == NULL)
	{
		lstmp = **lst1;
		**lst1 = (**lst1)->next;
		****toplist = lstmp;
		(****toplist)->next = NULL;
	}
	else
	{
		lstmp = **lst1;
		**lst1 = (**lst1)->next;
		lstmp->next = ****toplist;
		****toplist = lstmp;
	}
}

void		lst_add7(t_lst ****toplist, t_lst ***lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (***toplist == NULL)
	{
		lstmp = **lst1;
		**lst1 = (**lst1)->next;
		***toplist = lstmp;
		(***toplist)->next = NULL;
	}
	else
	{
		lstmp = **lst1;
		**lst1 = (**lst1)->next;
		lstmp->next = ***toplist;
		***toplist = lstmp;
	}
}

void		lst_add5(t_lst **toplist, t_lst *t_lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	lstmp = create_lst((t_lst1)->content);
	if (*toplist == NULL)
		*toplist = lstmp;
	else
	{
		lstmp->next = *toplist;
		*toplist = lstmp;
	}
}

void		lst_add8(t_lst ***toplist, t_lst ****lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (**toplist == NULL)
	{
		lstmp = ***lst1;
		***lst1 = (***lst1)->next;
		**toplist = lstmp;
		(**toplist)->next = NULL;
	}
	else
	{
		lstmp = ***lst1;
		***lst1 = (***lst1)->next;
		lstmp->next = **toplist;
		**toplist = lstmp;
	}
}

void		lst_add9(t_lst ****toplist, t_lst *t_lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	lstmp = create_lst(((t_numb*)(t_lst1)->content));
	if (***toplist == NULL)
		***toplist = lstmp;
	else
	{
		lstmp->next = ***toplist;
		***toplist = lstmp;
	}
}
