/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:56:26 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 10:39:43 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_p6(t_lst ***lsta, t_lst ***lstop)
{
	int		fd;
	char	*line;

	line = NULL;
	*lsta = (t_lst**)malloc(sizeof(t_lst*));
	*lstop = (t_lst**)malloc(sizeof(t_lst*));
	**lsta = NULL;
	**lstop = NULL;
	if ((fd = open("error_file", O_RDWR)))
	{
		if (get_next_line(fd, &line) > 0)
		{
			lseek(fd, -6, SEEK_END);
			write(fd, "      ", 6);
			free(line);
			line = NULL;
		}
	}
}
