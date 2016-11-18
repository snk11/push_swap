/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 18:32:04 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 14:43:42 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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
		while(lstmp2 && lstmp2->next)
			lstmp2 = lstmp2->next;
		lstmp2->next = lstmp;
	}
}

void		ft_lstdel(t_lst *****toplist, int pos)
{
	t_lst		*lstmp;
	t_lst		*lstmp2;
	int			i;

	lstmp = NULL;
	lstmp2 = NULL;
	i = 0;
	lstmp2 = ****toplist;
	while (i < pos)
	{
		lstmp = lstmp2;
		lstmp2 = lstmp2->next;
		i++;
	}
	if (pos > 0)
		ft_lstdel_p1(&lstmp, &lstmp2);
	else if (pos == 0)
		ft_lstdel_p2(&toplist, &lstmp);
}

void		ft_lstdel_p1(t_lst **lstmp, t_lst **lstmp2)
{
		(*lstmp)->next = (*lstmp2)->next;
		free((*lstmp2)->content);
		(*lstmp2)->content = NULL;
		free((*lstmp2));
		*lstmp2 = NULL;
}

void		ft_lstdel_p2(t_lst ******toplist, t_lst **lstmp)
{
		*lstmp = *****toplist;
		*****toplist = (*****toplist)->next;
		free((*lstmp)->content);
		(*lstmp)->content = NULL;
		free(*lstmp);
		*lstmp = NULL;
}

t_lst		*create_lst(void *content)
{
	t_lst	*curlst;

	curlst = NULL;
	if (!(curlst = (t_lst*)malloc(sizeof(t_lst))))
		return (NULL);
	if (content == NULL)
		curlst->content = NULL;
	else
		curlst->content = ft_memmove2(content);
	curlst->next = NULL;
	return (curlst);
}
