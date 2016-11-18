/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_p1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 21:39:02 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 13:20:46 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_checker_p1(t_lst ***lsta, t_lst **lstb, t_read *r)
{
	int		fd;
	char	*line;
	int		ret;

	line = (char*)malloc(sizeof(char) * 6);
	line[5] = 0;
	*lsta = (t_lst**)malloc(sizeof(t_lst*));
	**lsta = NULL;
	*lstb = NULL;
	r->indko = 0;
	r->inderror = 0;
	if ((fd = open("error_file", O_RDWR)))
	{
		ret = read(fd, line, 5);
		if(ft_strcmp(line,"Error") == 0)
		{
			lseek(fd, -6, SEEK_END);
			write(fd, "     ", 5);
			ft_free1(&line);
			return (0);
		}
		ft_free1(&line);
	}
	return (1);
}
