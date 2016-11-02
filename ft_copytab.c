/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copytab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:31:32 by syusof            #+#    #+#             */
/*   Updated: 2016/11/02 15:36:25 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_copytab(int **tab2,int *tab1)
{
	int nbelem1;
	int	i;

	i = 0;
	nbelem1 = ft_countelemtab(tab1);
	while(nbelem1 > i)
	{
		*tab2[i] = tab1[i];
		nbelem1--;
		i++;
	}
}
