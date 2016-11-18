/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:40:58 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:48:45 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		lst_add20(t_lst *****toplist, t_lst ******lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (****toplist == NULL)
	{
		lstmp = *****lst1;
		*****lst1 = (*****lst1)->next;
		****toplist = lstmp;
		(****toplist)->next = NULL;
	}
	else
	{
		lstmp = *****lst1;
		*****lst1 = (*****lst1)->next;
		lstmp->next = ****toplist;
		****toplist = lstmp;
	}
}

void		lst_add21(t_lst *******toplist, t_lst ******lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (******toplist == NULL)
	{
		lstmp = *****lst1;
		*****lst1 = (*****lst1)->next;
		******toplist = lstmp;
		(******toplist)->next = NULL;
	}
	else
	{
		lstmp = *****lst1;
		*****lst1 = (*****lst1)->next;
		lstmp->next = ******toplist;
		******toplist = lstmp;
	}
}

void		lst_add22(t_lst ******toplist, t_lst *******lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (*****toplist == NULL)
	{
		lstmp = ******lst1;
		******lst1 = (******lst1)->next;
		*****toplist = lstmp;
		(*****toplist)->next = NULL;
	}
	else
	{
		lstmp = ******lst1;
		******lst1 = (******lst1)->next;
		lstmp->next = *****toplist;
		*****toplist = lstmp;
	}
}

void		lst_add2(t_lst ***toplist, t_lst *t_lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	lstmp = create_lst((t_lst1)->content);
	if (**toplist == NULL)
		**toplist = lstmp;
	else
	{
		lstmp->next = **toplist;
		**toplist = lstmp;
	}
}

void		lst_add_down2(t_lst **toplist, t_lst *t_lst1)
{
	t_lst		*lstmp;
	t_lst		*lstmp2;

	lstmp = NULL;
	lstmp2 = NULL;
	lstmp2 = *toplist;
	lstmp = create_lst((t_lst1)->content);
	if (*toplist == NULL)
		*toplist = lstmp;
	else
	{
		while (lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}
