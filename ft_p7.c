/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:10:38 by syusof            #+#    #+#             */
/*   Updated: 2016/11/22 17:54:17 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_p7(t_lst ***lstop, t_lst ***lsta, t_option *option)
{
	if (**lstop)
		ft_checkdel_op(&lstop);
	if (option->indc == 1)
	{
		if (**lstop)
			ft_printlstc(**lstop);
	}
	else if (option->indf == 1)
	{
		if (**lstop)
			ft_printlst(**lstop);
		if (**lsta)
			ft_printlstf(**lsta);
	}
	else if (option->indl == 1)
	{
		if (**lstop)
			ft_printlst(**lstop);
		ft_printlstl(**lstop);
	}
	else if (**lstop)
		ft_printlst(**lstop);
}
