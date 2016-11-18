/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:40:33 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:47:11 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		lst_add10(t_lst ****toplist, t_lst ******lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (***toplist == NULL)
	{
		lstmp = *****lst1;
		*****lst1 = (*****lst1)->next;
		***toplist = lstmp;
		(***toplist)->next = NULL;
	}
	else
	{
		lstmp = *****lst1;
		*****lst1 = (*****lst1)->next;
		lstmp->next = ***toplist;
		***toplist = lstmp;
	}
}

void		lst_add11(t_lst ******toplist, t_lst ****lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (*****toplist == NULL)
	{
		lstmp = ***lst1;
		***lst1 = (***lst1)->next;
		*****toplist = lstmp;
		(*****toplist)->next = NULL;
	}
	else
	{
		lstmp = ***lst1;
		***lst1 = (***lst1)->next;
		lstmp->next = *****toplist;
		*****toplist = lstmp;
	}
}

void		lst_add12(t_lst *******toplist, t_lst *****lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (******toplist == NULL)
	{
		lstmp = ****lst1;
		****lst1 = (****lst1)->next;
		******toplist = lstmp;
		(******toplist)->next = NULL;
	}
	else
	{
		lstmp = ****lst1;
		****lst1 = (****lst1)->next;
		lstmp->next = ******toplist;
		******toplist = lstmp;
	}
}

void		lst_add13(t_lst ******toplist, t_lst *lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (*****toplist == NULL)
	{
		lstmp = lst1;
		lst1 = (lst1)->next;
		*****toplist = lstmp;
		(*****toplist)->next = NULL;
	}
	else
	{
		lstmp = lst1;
		lst1 = (lst1)->next;
		lstmp->next = *****toplist;
		*****toplist = lstmp;
	}
}

void		lst_add14(t_lst *****toplist, t_lst *lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (****toplist == NULL)
	{
		lstmp = lst1;
		lst1 = (lst1)->next;
		****toplist = lstmp;
		(****toplist)->next = NULL;
	}
	else
	{
		lstmp = lst1;
		lst1 = (lst1)->next;
		lstmp->next = ****toplist;
		****toplist = lstmp;
	}
}
