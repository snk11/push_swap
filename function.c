/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 18:32:04 by syusof            #+#    #+#             */
/*   Updated: 2016/11/07 12:21:08 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_printlst(t_lst *lst1)
{
	while(lst1)
	{
		ft_putnbr(((t_numb*)(lst1)->content)->val);
		ft_putstr(" ");
		lst1 = lst1->next;
	}
}


int		ft_comptelem(t_lst *lsta)
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
	return (nb - 1);
}





void		lst_add(t_lst **toplist, t_lst **lst1)
{

	t_lst		*lstmp;

	lstmp = NULL;
//	lstmp = create_lst((*lst1)->content);
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
//	lstmp = create_lst((*lst1)->content);
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
//	lstmp = create_lst((*lst1)->content);
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

void		lst_add6(t_lst *****toplist, t_lst ***lst1)
{

	t_lst		*lstmp;

	lstmp = NULL;
//	lstmp = create_lst((*lst1)->content);
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
//	lstmp = create_lst((*lst1)->content);
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
	{
//		ft_freelst(toplist);
		*toplist = lstmp;
	}
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
//	lstmp = create_lst((*lst1)->content);
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
	lstmp = create_lst((t_lst1)->content);
	if (***toplist == NULL)
	{
//		ft_freelst(toplist);
		***toplist = lstmp;
	}
	else
	{
		lstmp->next = ***toplist;
		***toplist = lstmp;
	}
}

void		lst_add10(t_lst ****toplist, t_lst ******lst1)
{

	t_lst		*lstmp;

	lstmp = NULL;
//	lstmp = create_lst((*lst1)->content);
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
//	lstmp = create_lst((*lst1)->content);
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
//	lstmp = create_lst((*lst1)->content);
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
void		lst_add2(t_lst ***toplist, t_lst *t_lst1)
{

	t_lst		*lstmp;

	lstmp = NULL;
	lstmp = create_lst((t_lst1)->content);
	if (**toplist == NULL)
	{
//		ft_freelst(toplist);
		**toplist = lstmp;
	}
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
	{
//		ft_freelst(toplist);
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
//		if (!(curlst->content = malloc(sizeof(content))))
//			return (NULL);
//		curlst->content = ft_memmove(curlst->content, content, sizeof(content));
		curlst->content = ft_memmove2(content);
	}
	curlst->next = NULL;
	return (curlst);
}
