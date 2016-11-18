/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:39:00 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 20:21:17 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_p5(int ac, char **av)
{
	int		fd;

	if(ft_checkspacestring(av[ac - 1]) == 1)
	{
		if (ft_checkint(av[ac - 1]) == 0)
		{
			write(2, "Error\n", 6);
			if ((fd = open("error_file", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)))
				write(fd, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}
