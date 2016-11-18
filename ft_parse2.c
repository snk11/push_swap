/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:15:48 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:17:39 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_parse1_p2_p2(t_lst *****lsta, int i, char *s1, t_numb *e)
{
	t_lst		*lstmp;

	if (ft_strcmp(s1, "256") == 0)
	{
		free(s1);
		s1 = NULL;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add13(&lsta, lstmp);
		((t_numb*)((****lsta)->content))->val = 256;
	}
	else
	{
		free(s1);
		s1 = NULL;
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add13(&lsta, lstmp);
	}
	return (1);
}

int		ft_parse1_p3(char **s, int *ind1)
{
	int		fd;

	if (!(*s) && *ind1 == 0)
		return (1);
	else if (!(*s) && *ind1 == 1)
	{
		write(2, "Error\n", 6);
		if ((fd = open("error_file", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)))
			write(fd, "Error\n", 6);
		return (0);
	}
	return (1);
}
