/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slide.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 14:07:37 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 16:35:46 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_slide_a(t_lst ****lsta, t_lst ****lstop)
{
	t_lst	*lstmp;
	t_lst	*lstmp4;
	int		cnt1;
	int		cnt2;

	lstmp = NULL;
	lstmp4 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	if (***lsta && (***lsta)->next && (((t_numb*)(***lsta)->content)->val
				> ((t_numb*)((***lsta)->next)->content)->val))
	{
		swap3(&lsta);
		ft_lstop_add_down1(&lstop, 1);
	}
	lstmp = ft_copylst(***lsta);
	cnt1 = ft_balance(&lstmp, reverse1);
	lstmp4 = ft_copylst(***lsta);
	cnt2 = ft_balance(&lstmp4, rotate1);
	ft_freelst(&lstmp);
	ft_freelst(&lstmp4);
	if ((cnt1 > 0 && cnt1 < cnt2) || (cnt1 > 0 && cnt1 == cnt2))
		ft_slide_a_p1(&lsta, &lstop, cnt1);
	else if (cnt2 > 0 && cnt1 > cnt2)
		ft_slide_a_p2(&lsta, &lstop, cnt2);
}

void		ft_slide_a_p1(t_lst *****lsta, t_lst *****lstop, int cnt1)
{
	while (cnt1 > 0)
	{
		reverse5(&lsta);
		ft_lstop_add_down3(&lstop, 3);
		cnt1--;
	}
}

void		ft_slide_a_p2(t_lst *****lsta, t_lst *****lstop, int cnt2)
{
	while (cnt2 > 0)
	{
		rotate5(&lsta);
		ft_lstop_add_down3(&lstop, 2);
		cnt2--;
	}
}
