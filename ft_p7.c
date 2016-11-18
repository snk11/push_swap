/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:10:38 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 10:55:08 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_p7(t_lst ***lstop)
{
	if(*lstop)
		ft_checkdel_op(&lstop);
	if(*lstop)
		ft_printlst(**lstop);
}