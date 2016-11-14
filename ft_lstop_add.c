/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstop_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:22:42 by syusof            #+#    #+#             */
/*   Updated: 2016/11/14 13:19:09 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstop_add1(t_lst *****lstop,int p)
{

	t_numb	*e;
	t_lst	*lstmp;

	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add13(&lstop, lstmp);
//		ft_freelst(&lstmp);
}

void	ft_lstop_add2(t_lst ****lstop,int p)
{

	t_numb	*e;
	t_lst	*lstmp;

	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add14(&lstop, lstmp);
//		ft_freelst(&lstmp);
}

void	ft_lstop_add3(t_lst ******lstop,int p)
{

	t_numb	*e;
	t_lst	*lstmp;

	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add15(&lstop, lstmp);
//		ft_freelst(&lstmp);
}

void		ft_lstop_add_down1(t_lst *****toplist, int p)
{
	t_numb	*e;
	t_lst	*lstmp;
	t_lst		*lstmp2;

	lstmp = NULL;
	lstmp2 = ****toplist;
	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
		lstmp = create_lst(e);
		free(e);
		e = NULL;

	if (****toplist == NULL)
	{
//		ft_freelst(toplist);
		****toplist = lstmp;
	}
	else
	{
		while(lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}

void		ft_lstop_add_down2(t_lst ****toplist, int p)
{
	t_numb	*e;
	t_lst	*lstmp;
	t_lst		*lstmp2;

	lstmp = NULL;
	lstmp2 = ***toplist;
	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
		lstmp = create_lst(e);
		free(e);
		e = NULL;

	if (***toplist == NULL)
	{
//		ft_freelst(toplist);
		***toplist = lstmp;
	}
	else
	{
		while(lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}

void		ft_lstop_add_down3(t_lst ******toplist, int p)
{
	t_numb	*e;
	t_lst	*lstmp;
	t_lst		*lstmp2;

	lstmp = NULL;
	lstmp2 = *****toplist;
	e = NULL;
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = p;
		lstmp = create_lst(e);
		free(e);
		e = NULL;

	if (*****toplist == NULL)
	{
//		ft_freelst(toplist);
		*****toplist = lstmp;
	}
	else
	{
		while(lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}

