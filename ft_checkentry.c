/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkentry.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:12:57 by syusof            #+#    #+#             */
/*   Updated: 2016/11/22 15:15:58 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_checkentry(t_option *option)
{
	int		fd;

	while (option->ac >= 2)
	{
		if (option->ac - 1 == 1 && option->indoption == 1)
			option->av[1] = option->av[1] + 2;
		if (ft_checkspacestring(option->av[option->ac - 1]) == 1)
		{
			if (ft_checkint(option->av[option->ac - 1]) == 0)
			{
				write(2, "Error\n", 6);
				if ((fd = open("error_file", O_CREAT | O_WRONLY,
								S_IRUSR | S_IWUSR)))
					write(fd, "Error\n", 6);
				return (0);
			}
		}
		option->ac--;
	}
	return (1);
}
