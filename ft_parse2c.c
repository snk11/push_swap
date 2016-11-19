/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse2c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:16:06 by syusof            #+#    #+#             */
/*   Updated: 2016/11/19 10:33:50 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_parse1c_p2_p1(t_lst ******lsta, int i, char *s1, t_numb *e)
{
	if (ft_checkdouble(*****lsta, e->val) == 0)
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

int			ft_parse1c_p2_p2(t_lst ******lsta, int i, char *s1, t_numb *e)
{
	t_lst		*lstmp;

	if (ft_strcmp(s1, "256") == 0)
	{
		free(s1);
		s1 = NULL;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add15(&lsta, lstmp);
		((t_numb*)((*****lsta)->content))->val = 256;
	}
	else
	{
		free(s1);
		s1 = NULL;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add15(&lsta, lstmp);
	}
	return (1);
}

int			ft_parse1c_p3(char *s, int *ind1)
{
	if (!(*s) && *ind1 == 0)
		return (1);
	else if (!(*s) && *ind1 == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
