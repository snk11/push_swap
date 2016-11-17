/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:21:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 16:00:39 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"








#include <stdio.h>
int		ft_parse1(t_lst ***lsta,char *s)
{
	int		i;
	int		j;
	int		k;
	int		ind1;
	int		ind2;
	char	*sbegi;
	char	*s1;
	t_numb	*e;
	t_lst	*lstmp;

	ind1 = 0;
	ind2 = 0;
	s1 = NULL;
	sbegi = NULL;
	e = NULL;
	while(ind1 == 0)
	{
		while(*s && (*s == ' ' || *s == '\t'))
			s++;
		sbegi = s;
		i = ft_strlen_isdigit(s);
		k = i;
		while(k > 0)
		{
			k--;
			s++;
		}
		if (ft_parse1_p1(s, &ind1, i) == 0)
			return (0);
		if (i > 0)
		{
			if (ft_parse1_p2(&lsta, i,sbegi) == 0)
				return (0);
			/*
			s1 = ft_strnew(i);
			j = 0;
			while (j < i)
			{
				s1[j] = sbegi[j];
				j++;
			}
			s1[j] = 0;
			if(ft_checkint(s1) == 0)
			{
				free(s1);
				s1 = NULL;
				write(2, "Error\n", 6);
				return (0);
			}
			if (!(e = (t_numb*)malloc(sizeof(t_numb))))
				return (0);
			e->val = ft_atoi(s1);
			if (ft_checkdouble(**lsta,e->val) == 0)
			{
				free(s1);
				s1 = NULL;
				free(e);
				e = NULL;
				write(2, "Error\n", 6);
				return (0);
			}
			if(ft_strcmp(s1,"256") == 0)
			{
				free(s1);
				s1 = NULL;
				lstmp = create_lst(e);
				free(e);
				e = NULL;
				lst_add9(&lsta, lstmp);
				((t_numb*)((**lsta)->content))->val = 256;
				ft_freelst(&lstmp);
			}
			else
			{
				free(s1);
				s1 = NULL;
				lstmp = create_lst(e);
				free(e);
				e = NULL;
				lst_add9(&lsta, lstmp);
				ft_freelst(&lstmp);
			}
			*/
		}
		while(*s && (*s == ' ' || *s == '\t'))
			s++;
		if(!(*s) && ind1 == 0)
			return (1);
		else if(!(*s) && ind1 == 1)
		{
			write(2, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}

int		ft_parse1_p1(char *s, int *ind1, int i)
{
	if(*s && *s != ' ' && *s != '\t')
	{
		write(2, "Error\n", 6);
		return (0);
	}
	else if (*s)
		*ind1 = 0;
	else if (!(*s) && i == 0)
		*ind1 = 1;
	return (1);
}

int		ft_parse1_p2(t_lst ****lsta, int i, char *sbegi)
{
	char	*s1;
	int		j;
	t_numb	*e;
	t_lst	*lstmp;

	s1 = ft_strnew(i);
	j = 0;
	while (j < i)
	{
		s1[j] = sbegi[j];
		j++;
	}
	s1[j] = 0;
	if(ft_checkint(s1) == 0)
	{
		free(s1);
		s1 = NULL;
		write(2, "Error\n", 6);
		return (0);
	}
	if (!(e = (t_numb*)malloc(sizeof(t_numb))))
		return (0);
	e->val = ft_atoi(s1);
	if (ft_parse1_p2_p1(&lsta, i, s1, e) == 0)
		return (0);
	if (ft_parse1_p2_p2(&lsta, i, s1, e) == 0)
		return (0);
/*
	if (ft_checkdouble(***lsta,e->val) == 0)
	{
		free(s1);
		s1 = NULL;
		free(e);
		e = NULL;
		write(2, "Error\n", 6);
		return (0);
	}
	if(ft_strcmp(s1,"256") == 0)
	{
		free(s1);
		s1 = NULL;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add14(&lsta, lstmp);
		((t_numb*)((***lsta)->content))->val = 256;
//		ft_freelst(&lstmp);
	}
	else
	{
		free(s1);
		s1 = NULL;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add14(&lsta, lstmp);
//		ft_freelst(&lstmp);
	}
	*/
	return (1);
}

int		ft_parse1_p2_p1(t_lst *****lsta, int i, char *s1, t_numb *e)
{

	if (ft_checkdouble(****lsta,e->val) == 0)
	{
		free(s1);
		s1 = NULL;
		free(e);
		e = NULL;
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}


int		ft_parse1_p2_p2(t_lst *****lsta, int i, char *s1, t_numb *e)
{
	t_lst		*lstmp;

	if(ft_strcmp(s1,"256") == 0)
	{
		free(s1);
		s1 = NULL;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add13(&lsta, lstmp);
		((t_numb*)((****lsta)->content))->val = 256;
//		ft_freelst(&lstmp);
	}
	else
	{
		free(s1);
		s1 = NULL;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add13(&lsta, lstmp);
//		ft_freelst(&lstmp);
	}
	return (1);
}
