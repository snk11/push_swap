/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstop_add2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:39:25 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 15:40:06 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_lstop_add_down2(t_lst ****toplist, int p)
{
	t_numb	*e;
	t_lst	*lstmp;
	t_lst	*lstmp2;

	lstmp = NULL;
	lstmp2 = ***toplist;
	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
	lstmp = create_lst(e);
	free(e);
	e = NULL;
	if (***toplist == NULL)
		***toplist = lstmp;
	else
	{
		while (lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}

void		ft_lstop_add_down3(t_lst ******toplist, int p)
{
	t_numb	*e;
	t_lst	*lstmp;
	t_lst	*lstmp2;

	lstmp = NULL;
	lstmp2 = *****toplist;
	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
	lstmp = create_lst(e);
	free(e);
	e = NULL;
	if (*****toplist == NULL)
		*****toplist = lstmp;
	else
	{
		while (lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}

void		ft_lstop_add_down4(t_lst *******toplist, int p)
{
	t_numb	*e;
	t_lst	*lstmp;
	t_lst	*lstmp2;

	lstmp = NULL;
	lstmp2 = ******toplist;
	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
	lstmp = create_lst(e);
	free(e);
	e = NULL;
	if (******toplist == NULL)
		******toplist = lstmp;
	else
	{
		while (lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}
