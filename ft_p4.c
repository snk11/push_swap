/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:38:58 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 15:58:17 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_p4(t_lst ***lsta, int ac, char **av)
{
	if (ft_checkentry(ac, av) == 0)
		return (0);
	else
	{
		while (ac >= 2)
		{
			if (ft_p4_p1(&lsta, ac, av) == 0)
				return (0);
			ac--;
		}
	}
	return (1);
}

int			ft_p4_p1(t_lst ****lsta, int ac, char **av)
{
	t_numb	*e;
	int		fd;

	e = NULL;
	if (!(e = (t_numb*)malloc(sizeof(t_numb))))
		return (0);
	e->val = ft_atoi(av[ac - 1]);
	if (ft_checkdouble(***lsta, e->val) == 0)
	{
		write(2, "Error\n", 6);
		if ((fd = open("error_file", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)))
			write(fd, "Error\n", 6);
		return (0);
	}
	if (ft_strcmp(av[ac - 1], "256") == 0)
		ft_p4_p1_p1(&lsta, &e);
	/*
	{
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add14(&lsta, lstmp);
		((t_numb*)((***lsta)->content))->val = 256;
	}
	*/
	else
		ft_p4_p1_p2(&lsta, &e);
	/*
	{
		lstmp = create_lst(e);
		free(e);
		e = NULL;
		lst_add14(&lsta, lstmp);
	}
	*/
	return (1);
}

void	ft_p4_p1_p1(t_lst *****lsta, t_numb **e)
{
	t_lst	*lstmp;

	lstmp = create_lst(e);
	free(e);
	e = NULL;
	lst_add13(&lsta, lstmp);
	((t_numb*)((****lsta)->content))->val = 256;
}

void	ft_p4_p1_p2(t_lst *****lsta, t_numb **e)
{
	t_lst	*lstmp;
	lstmp = create_lst(e);
	free(e);
	e = NULL;
	lst_add13(&lsta, lstmp);
}
