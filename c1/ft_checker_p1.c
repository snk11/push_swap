/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_p1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 21:39:02 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 21:44:19 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		ft_checker_p1(t_lst ***lsta, t_lst **lstb, char **line,t_read *r)
{
	*lsta = (t_lst**)malloc(sizeof(t_lst*));
	**lsta = NULL;
	*lstb = NULL;
	*line = NULL;
	r->indko = 0;
	r->inderror = 0;
}
