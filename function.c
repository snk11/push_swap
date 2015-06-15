/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 18:32:04 by syusof            #+#    #+#             */
/*   Updated: 2015/06/15 18:59:16 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

#include <stdio.h>
void		lst_add(t_lst **toplist, t_lst *t_lst1)
{

	t_lst		*lstmp;

//	lstmp = NULL;
		lstmp = create_lst(t_lst1->content);
//	if(!t_lst1)
//		return;
	if (*toplist == NULL)
	{
//		lstmp = create_lst(t_lst1->content);
		*toplist = lstmp;
	}
//	if (toplist && t_lst1)
	else
	{
		lstmp->next = *toplist;
		*toplist = lstmp;
	}
//	printf("%d\n",((t_numb*)((*toplist))->content)->val);
//	printf("%d\n",((t_numb*)((t_lst1)->next)->content)->val);
}

t_lst		*create_lst(void *content)
{
	t_lst	*curlst;

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
