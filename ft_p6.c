/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:56:26 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 15:05:54 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_p6(t_lst ***lsta, t_lst ***lstop)
{
	*lsta = (t_lst**)malloc(sizeof(t_lst*));
	*lstop = (t_lst**)malloc(sizeof(t_lst*));
	**lsta = NULL;
	**lstop = NULL;
}
