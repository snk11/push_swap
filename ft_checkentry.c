/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkentry.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:12:57 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 10:14:59 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"




#include <stdio.h>
int		ft_checkentry(int ac, char **av)
{
	int		fd;
	while (ac >= 2)
	{
		if (ft_checkint(av[ac - 1]) == 0)
		{
			write(2, "Error\n", 6);
			if ((fd = open("error_file", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)))
				write(fd, "Error\n", 6);
			return (0);
		}
		ac--;
	}
	return (1);
}
