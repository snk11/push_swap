/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:10:38 by syusof            #+#    #+#             */
/*   Updated: 2016/11/22 14:23:55 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_p7(t_lst ***lstop, t_lst ***lsta)
{
	if (*lstop)
		ft_checkdel_op(&lstop);
	if (*lstop)
		ft_printlstc(**lstop);
	ft_printlstf(**lsta);
	/*
	if (*lstop)
		ft_printlst(**lstop);
	*/
}
