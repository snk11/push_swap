/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:21:40 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 14:16:13 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			get_valpivot(t_lst *lsta)
{
	int		nbelema;
	int		*tab;
	int		res;

	nbelema = ft_comptelem(lsta);
	tab = (int*)malloc(sizeof(int)*nbelema);
	ft_copy_in_tab(lsta,&tab);
	get_valpivot_p1(&tab, nbelema);
	if (nbelema > 36)
	{
		res = tab[36];
		free(tab);
		tab = NULL;
		return (res);
	}
	else if (nbelema >= 1)
	{
		res = tab[0];
		free(tab);
		tab = NULL;
		return (res);
	}
	return (-1);
}

void		get_valpivot_p1(int	**tab, int nbelema)
{
	int		ind1;
	int		i;
	int		w;

	ind1 = 1;
	while(ind1 == 1)
	{
		i = 0;
		ind1 = 0;
		while(i < nbelema - 2)
		{
			if((*tab)[i] > (*tab)[i+1])
			{
				w = (*tab)[i];
				(*tab)[i] = (*tab)[i+1];
				(*tab)[i+1] = w;
				ind1 = 1;
			}
			i++;
		}
	}
}

int			get_indextopush2(t_lst *lsta,int valpivot)
{
	int		index;
	int		i;
	int		ind1;
	t_lst	*lstabegi;

	index = -1;
	ind1 = 0;
	lstabegi = lsta;
	i = 0;
	get_indextopush2_p1(lsta, valpivot, &index, &ind1);
	/*
	while(lsta && lsta->next && ind1 == 0)
	{
		if(((t_numb*)lsta->content)->val < valpivot)
		{
			index = i;
			ind1 = 1;
		}
		lsta = lsta->next;
		i++;
	}
	if (ind1 == 0 && lsta)
	{
		if(((t_numb*)lsta->content)->val < valpivot)
		{
			index = i;
			ind1 = 1;
		}
	}*/
	lsta = lstabegi;
	i = 0;
	while(index == -1 && lsta && lsta->next)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
			index = i;
		lsta = lsta->next;
		i++;
	}
	if(index == -1 && lsta)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
			index = i;
	}
	return (index);
}

void	get_indextopush2_p1(t_lst *lsta, int valpivot, int *index, int *ind1)
{
	int		i;

	i = 0;
	while(lsta && lsta->next && *ind1 == 0)
	{
		if(((t_numb*)lsta->content)->val < valpivot)
		{
			*index = i;
			*ind1 = 1;
		}
		lsta = lsta->next;
		i++;
	}
	if (*ind1 == 0 && lsta)
	{
		if(((t_numb*)lsta->content)->val < valpivot)
		{
			*index = i;
			*ind1 = 1;
		}
	}
}

int			get_indexpivot(t_lst *lsta,int valpivot)
{
	int		index;
	int		i;

	index = -1;
	i = 0;
	while(lsta && lsta->next)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
		{
			index = i;
		}
		lsta = lsta->next;
		i++;
	}
	if(lsta)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
		{
			index = i;
		}
	}
	return (index);
}

void	ft_quicksort(t_lst ***lsta,t_lst ***lstop)
{
	int		index;
	int		indexpivot;
	int		valpivot;
	t_lst	*lstb;

	lstb = NULL;
	ft_slide_a(&lsta,&lstop);
	if (ft_checksort(**lsta) == 0)
	{
		while (**lsta)
		{
			valpivot = get_valpivot(**lsta);
			indexpivot = get_indexpivot(**lsta,valpivot);
			while(**lsta && get_indextopush2(**lsta,valpivot) != -1)
			{
				index = get_indextopush2(**lsta,valpivot);
				if (ft_comptelem(**lsta) % 2 == 0)
					ft_quicksort_p1(&lsta, &lstb, &lstop, index);
				else if (ft_comptelem(**lsta) % 2 != 0)
					ft_quicksort_p2(&lsta, &lstb, &lstop, index);
			}
		}
		ft_insertionsort2(&lsta,&lstb,&lstop);
	}
}

void		ft_quicksort_p1(t_lst ****lsta, t_lst **lstb, t_lst ****lstop, int index)
{
	int		i;
	int		nbelema;

	nbelema = ft_comptelem(***lsta);
	i = 0;
	if (index < nbelema / 2)
	{
		while( i < index)
		{
			rotate3(&lsta);
			ft_lstop_add_down1(&lstop,2);
			i++;
		}
	}
	else if (index >= nbelema / 2)
	{
		while( i < nbelema  - index)
		{
			reverse3(&lsta);
			ft_lstop_add_down1(&lstop,3);
			i++;
		}
	}
	push5(&lstb,&lsta);
	ft_lstop_add_down1(&lstop,24);
}

void		ft_quicksort_p2(t_lst ****lsta, t_lst **lstb, t_lst ****lstop, int index)
{
	int		i;
	int		nbelema;

	nbelema = ft_comptelem(***lsta);
	i = 0;
	if (index <= nbelema / 2)
	{
		while( i < index)
		{
			rotate3(&lsta);
			ft_lstop_add_down1(&lstop,2);
			i++;
		}
	}
	else if (index > nbelema / 2)
	{
		while( i < nbelema  - index)
		{
			reverse3(&lsta);
			ft_lstop_add_down1(&lstop,3);
			i++;
		}
	}
	push5(&lstb,&lsta);
	ft_lstop_add_down1(&lstop,24);
}
