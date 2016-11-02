/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slide.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 14:07:37 by syusof            #+#    #+#             */
/*   Updated: 2016/11/02 16:49:46 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_slide_a2(int **tab1)
{
	int		cnt1;
	int		cnt2;
	int		i;
	int		*tabtmp1;
	int		*tabtmp2;
	int		nbelem;

	tabtmp1 = NULL;
	tabtmp2 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	nbelem = ft_countelemtab(*tab1);
	i = 0;
	if (tab1[0] && tab1[1] && tab1[0] > tab1[1])
	{
		swap2(tab1);
		write(1,"sa\n",3);
	}
	tabtmp1 = (int*)malloc(sizeof(int) * nbelem);
	ft_copytab(&tabtmp1,*tab1);
	cnt1 = ft_balance3(&tabtmp1,reverse2);
	tabtmp1 = (int*)malloc(sizeof(int) * nbelem);
	ft_copytab(&tabtmp1,*tab1);
	cnt2 = ft_balance3(&tabtmp2,rotate2);
	if ((cnt1 > 0 && cnt1 < cnt2) || (cnt1 > 0 && cnt1 == cnt2))
	{
		ft_copytab(tab1,tabtmp1);
		while(cnt1 > 0)
		{
			write(1,"rra\n",4);
			cnt1--;
		}
	}
	else if (cnt2 > 0 && cnt1 > cnt2)
	{
		ft_copytab(tab1,tabtmp2);
		while(cnt2 > 0)
		{
			write(1,"ra\n",4);
			cnt2--;
		}
	}
	free(tabtmp1);
	tabtmp1 = NULL;
	free(tabtmp2);
	tabtmp2 = NULL;
}

void	ft_slide_a(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp4;
	int		cnt1;
	int		cnt2;

	lstmp = NULL;
	lstmp4 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	if(*lsta && (*lsta)->next && ((*lsta)->val > ((*lsta)->next)->val))
	{
		swap(lsta);
		write(1,"sa\n",3);
	}
	lstmp = ft_copylst(*lsta);
	cnt1 = ft_balance(&lstmp,reverse);
	lstmp4 = ft_copylst(*lsta);
	cnt2 = ft_balance(&lstmp4,rotate);
	if ((cnt1 > 0 && cnt1 < cnt2) || (cnt1 > 0 && cnt1 == cnt2))
	{
		*lsta = lstmp;
		while(cnt1 > 0)
		{
			write(1,"rra\n",4);
			cnt1--;
		}
	}
	else if (cnt2 > 0 && cnt1 > cnt2)
	{
		*lsta = lstmp4;
		while(cnt2 > 0)
		{
			write(1,"ra\n",4);
			cnt2--;
		}
	}
}

void	ft_slide_b(t_lst **lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp4;
	int		cnt1;
	int		cnt2;

	lstmp = NULL;
	lstmp4 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	if(*lsta && (*lsta)->next && ((*lsta)->val < ((*lsta)->next)->val))
	{
		swap(lsta);
		write(1,"sb\n",3);
	}
	lstmp = ft_copylst(*lsta);
	cnt1 = ft_balance2(&lstmp,reverse);
	lstmp4 = ft_copylst(*lsta);
	cnt2 = ft_balance2(&lstmp4,rotate);
	if ((cnt2 > 0 && cnt1 > cnt2) || (cnt2 > 0 && cnt1 == cnt2))
	{
		*lsta = lstmp4;
		while(cnt2 > 0)
		{
			write(1,"rb\n",4);
			cnt2--;
		}
	}
	else if (cnt1 > 0 && cnt1 < cnt2)
	{
		*lsta = lstmp;
		while(cnt1 > 0)
		{
			write(1,"rrb\n",4);
			cnt1--;
		}
	}

}
