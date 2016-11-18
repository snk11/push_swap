/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:40:52 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:48:52 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		lst_add15(t_lst *******toplist, t_lst *lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (******toplist == NULL)
	{
		lstmp = lst1;
		lst1 = (lst1)->next;
		******toplist = lstmp;
		(******toplist)->next = NULL;
	}
	else
	{
		lstmp = lst1;
		lst1 = (lst1)->next;
		lstmp->next = ******toplist;
		******toplist = lstmp;
	}
}

void		lst_add16(t_lst ********toplist, t_lst ******lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (*******toplist == NULL)
	{
		lstmp = *****lst1;
		*****lst1 = (*****lst1)->next;
		*******toplist = lstmp;
		(*******toplist)->next = NULL;
	}
	else
	{
		lstmp = *****lst1;
		*****lst1 = (*****lst1)->next;
		lstmp->next = *******toplist;
		*******toplist = lstmp;
	}
}

void		lst_add17(t_lst *****toplist, t_lst ****lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (****toplist == NULL)
	{
		lstmp = ***lst1;
		***lst1 = (***lst1)->next;
		****toplist = lstmp;
		(****toplist)->next = NULL;
	}
	else
	{
		lstmp = ***lst1;
		***lst1 = (***lst1)->next;
		lstmp->next = ****toplist;
		****toplist = lstmp;
	}
}

void		lst_add18(t_lst ****toplist, t_lst *****lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (***toplist == NULL)
	{
		lstmp = ****lst1;
		****lst1 = (****lst1)->next;
		***toplist = lstmp;
		(***toplist)->next = NULL;
	}
	else
	{
		lstmp = ****lst1;
		****lst1 = (****lst1)->next;
		lstmp->next = ***toplist;
		***toplist = lstmp;
	}
}

void		lst_add19(t_lst ******toplist, t_lst *****lst1)
{
	t_lst		*lstmp;

	lstmp = NULL;
	if (*****toplist == NULL)
	{
		lstmp = ****lst1;
		****lst1 = (****lst1)->next;
		*****toplist = lstmp;
		(*****toplist)->next = NULL;
	}
	else
	{
		lstmp = ****lst1;
		****lst1 = (****lst1)->next;
		lstmp->next = *****toplist;
		*****toplist = lstmp;
	}
}
