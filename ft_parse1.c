/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:21:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 20:31:51 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_parse1(t_lst ***lsta, char *s)
{
	t_pars		p;

	p.ind1 = 0;
	while (p.ind1 == 0 && *s)
	{
		while (*s && (*s == ' ' || *s == '\t'))
			s++;
		if(*s)
		{
			p.sbegi = s;
			p.i = ft_strlen_isdigit(s);
			p.k = p.i;
			while (p.k-- > 0)
				s++;
			if (ft_parse1_p1(s, &(p.ind1), p.i) == 0)
				return (0);
			if (p.i > 0)
			{
				if (ft_parse1_p2(&lsta, p.i, p.sbegi) == 0)
					return (0);
			}
			while (*s && (*s == ' ' || *s == '\t'))
				s++;
			if (ft_parse1_p3(&s, &(p.ind1)) == 0)
				return (0);
		}
	}
	return (1);
}

int		ft_parse1_p1(char *s, int *ind1, int i)
{
	int		fd;

	if (*s && *s != ' ' && *s != '\t')
	{
		write(2, "Error\n", 6);
		if ((fd = open("error_file", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)))
			write(fd, "Error\n", 6);
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
	if (ft_checkint(s1) == 0)
	{
		ft_parse1_p2_p3(&s1);
		return (0);
	}
	e = (t_numb*)malloc(sizeof(t_numb));
	e->val = ft_atoi(s1);
	if (ft_parse1_p2_p1(&lsta, i, s1, e) == 0)
		return (0);
	if (ft_parse1_p2_p2(&lsta, i, s1, e) == 0)
		return (0);
	return (1);
}

void	ft_parse1_p2_p3(char **s1)
{
	int		fd;

	free(*s1);
	*s1 = NULL;
	write(2, "Error\n", 6);
	if ((fd = open("error_file", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)))
		write(fd, "Error\n", 6);
}

int		ft_parse1_p2_p1(t_lst *****lsta, int i, char *s1, t_numb *e)
{
	int		fd;

	if (ft_checkdouble(****lsta, e->val) == 0)
	{
		free(s1);
		s1 = NULL;
		free(e);
		e = NULL;
		write(2, "Error\n", 6);
		if ((fd = open("error_file", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)))
			write(fd, "Error\n", 6);
		return (0);
	}
	return (1);
}
