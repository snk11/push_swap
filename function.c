/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 18:32:04 by syusof            #+#    #+#             */
/*   Updated: 2016/10/14 14:47:45 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

#include <stdio.h>
void		lst_add(t_lst **toplist, t_lst **t_lst1)
{

	t_lst		*lstmp;

	lstmp = NULL;
	lstmp = create_lst((*t_lst1)->content);
	if (*toplist == NULL)
	{
		*toplist = lstmp;
	}
	else
	{
		lstmp->next = *toplist;
		*toplist = lstmp;
	}
		*t_lst1 = (*t_lst1)->next;
}

void		lst_add2(t_lst **toplist, t_lst *t_lst1)
{

	t_lst		*lstmp;

	lstmp = NULL;
	lstmp = create_lst((t_lst1)->content);
	if (*toplist == NULL)
	{
		*toplist = lstmp;
	}
	else
	{
		lstmp->next = *toplist;
		*toplist = lstmp;
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
	{
		*toplist = lstmp;
	}
	else
	{
		while(lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}
/*
void		lst_add_del(t_lst **toplist, t_lst **t_lst1)
{

	t_lst		*lstmp;

	lstmp = NULL;
	lstmp = create_lst((*t_lst1)->content);
	if (*toplist == NULL)
	{
		*toplist = lstmp;
	}
	else
	{
		lstmp->next = *toplist;
		*toplist = lstmp;
	}
		*t_lst1 = NULL;
}
*/
t_lst		*create_lst(void *content)
{
	t_lst	*curlst;

	curlst = NULL;
	if (!(curlst = (t_lst*)malloc(sizeof(t_lst))))
		return (NULL);
	if (content == NULL)
	{
		curlst->content = NULL;
	}
	else
	{
		if (!(curlst->content = malloc(sizeof(content))))
			return (NULL);
		curlst->content = ft_memmove(curlst->content, content, sizeof(content));
	}
	curlst->next = NULL;
	return (curlst);
}
