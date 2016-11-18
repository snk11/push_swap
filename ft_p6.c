/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:56:26 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:07:57 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_p6(t_lst ***lsta, t_lst ***lstop)
{
	int		fd;
	char	*line;
	int		ret;

	line = (char*)malloc(sizeof(char) * 6);
	line[5] = 0;
	*lsta = (t_lst**)malloc(sizeof(t_lst*));
	*lstop = (t_lst**)malloc(sizeof(t_lst*));
	**lsta = NULL;
	**lstop = NULL;
	if ((fd = open("error_file", O_RDWR)))
	{
		ret = read(fd, line, 5);
		if (ft_strcmp(line, "Error") == 0)
		{
			lseek(fd, -6, SEEK_END);
			write(fd, "     ", 5);
		}
		ft_free1(&line);
	}
}
