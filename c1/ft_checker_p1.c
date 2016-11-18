/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_p1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 21:39:02 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 11:43:31 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_checker_p1(t_lst ***lsta, t_lst **lstb, t_read *r)
{
	int		fd;
	char	*line;

	line = NULL;
	*lsta = (t_lst**)malloc(sizeof(t_lst*));
	**lsta = NULL;
	*lstb = NULL;
	r->indko = 0;
	r->inderror = 0;
	if ((fd = open("error_file", O_RDWR)))
	{
		if (get_next_line(fd, &line) > 0)
		{
			if(ft_strcmp(line,"Error") == 0)
			{
				lseek(fd, -6, SEEK_END);
				write(fd, "      ", 6);
				ft_free1(&line);
				return (0);
			}
			free(line);
			line = NULL;
		}
	}
	return (1);
}
