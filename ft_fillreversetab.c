/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillreversetab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:10:25 by syusof            #+#    #+#             */
/*   Updated: 2016/11/02 17:43:28 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fillreversetab(int **tab2,int *tab1)
{
	int nbelem1;
	int	i;

	i = 0;
	nbelem1 = ft_countelemtab(tab1);
	while(nbelem1 > 0)
	{
		(*tab2)[i] = tab1[nbelem1 - 1];
		nbelem1--;
		i++;
	}
}
