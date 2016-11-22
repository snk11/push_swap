/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:53:50 by syusof            #+#    #+#             */
/*   Updated: 2016/11/22 17:28:51 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_init(t_option *option, int ac, char **av)
{
	option->i = 2;
	option->indc = 0;
	option->indf = 0;
	option->indl = 0;
	option->ac = ac;
	option->av = av;
	option->indoption = 0;
}
