/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_p2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 21:50:29 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 13:18:04 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


#include <stdio.h>
int		ft_checker_p2(t_lst ***lsta, t_lst **lstb, t_read *r)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) > 0)
	{
		ft_readline(line, &lsta, &lstb, r);
		if(line)
		{
			free(line);
			line = NULL;
		}
	}
	if (r->inderror == 1)
	{
		write(2,"Error\n",6);
		return (0);
	}
	if(ft_checker_p2_p1(&lsta, &lstb, r) == 0)
		return (0);
	write(1,"OK\n",3);
	return (1);
}

int		ft_checker_p2_p1(t_lst ****lsta, t_lst ***lstb, t_read *r)
{
	t_lst		*lstmp;

	r->nbelema = ft_comptelem(***lsta);
	if (ft_comptelem(***lsta) != r->nbelema || r->indko == 1)
	{
		write(1,"KO\n",3);
		return (0);
	}
	lstmp = ***lsta;
	while(lstmp && lstmp->next)
	{
		if(((t_numb*)(lstmp->content))->val > ((t_numb*)((lstmp->next)->content))->val)
		{
			write(1,"KO\n",3);
			return (0);
		}
		lstmp = lstmp->next;
	}
	return (1);
}
