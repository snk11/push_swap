/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slide.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 14:07:37 by syusof            #+#    #+#             */
/*   Updated: 2016/11/17 17:01:38 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"




#include <stdio.h>
void	ft_slide_a(t_lst ****lsta,t_lst ****lstop)
{
	t_lst	*lstmp;
	t_lst	*lstmp4;
//	t_lst	**lstmp5;
	int		cnt1;
	int		cnt2;

//	lstmp5 = (t_lst**)malloc(sizeof(t_lst*));
	lstmp = NULL;
	lstmp4 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	if(***lsta && (***lsta)->next && (((t_numb*)(***lsta)->content)->val > ((t_numb*)((***lsta)->next)->content)->val))
	{
		swap3(&lsta);
		ft_lstop_add_down1(&lstop, 1);
//		write(1,"sa\n",3);
	}
	lstmp = ft_copylst(***lsta);
	cnt1 = ft_balance(&lstmp,reverse1);
	lstmp4 = ft_copylst(***lsta);
	cnt2 = ft_balance(&lstmp4,rotate1);
		ft_freelst(&lstmp);
		ft_freelst(&lstmp4);
	if ((cnt1 > 0 && cnt1 < cnt2) || (cnt1 > 0 && cnt1 == cnt2))
	{
//		ft_balance3(&lsta,reverse3);
//		***lsta = lstmp;
		while(cnt1 > 0)
		{
			reverse3(&lsta);
		ft_lstop_add_down1(&lstop, 3);
//			write(1,"rra\n",4);
//			printf("slide1\n");
			cnt1--;
		}
	}
	else if (cnt2 > 0 && cnt1 > cnt2)
	{
//		ft_balance3(&lsta,rotate3);
//		***lsta = lstmp4;
		while(cnt2 > 0)
		{
			rotate3(&lsta);
		ft_lstop_add_down1(&lstop, 2);
//			write(1,"ra\n",4);
//			printf("slide1\n");
			cnt2--;
		}
	}
}

/*
void	ft_slide_a1(t_lst *****lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp4;
//	t_lst	**lstmp5;
	int		cnt1;
	int		cnt2;

//	lstmp5 = (t_lst**)malloc(sizeof(t_lst*));
	lstmp = NULL;
	lstmp4 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	if(****lsta && (****lsta)->next && (((t_numb*)(****lsta)->content)->val > ((t_numb*)((****lsta)->next)->content)->val))
	{
		swap5(&lsta);
		write(1,"sa\n",3);
	}
	lstmp = ft_copylst(****lsta);
	cnt1 = ft_balance(&lstmp,reverse1);
	lstmp4 = ft_copylst(****lsta);
	cnt2 = ft_balance(&lstmp4,rotate1);
		ft_freelst(&lstmp);
		ft_freelst(&lstmp4);
	if ((cnt1 > 0 && cnt1 < cnt2) || (cnt1 > 0 && cnt1 == cnt2))
	{
//		ft_balance3(&lsta,reverse3);
//		***lsta = lstmp;
		while(cnt1 > 0)
		{
			reverse5(&lsta);
			write(1,"rra\n",4);
//			printf("slide2\n");
			cnt1--;
		}
	}
	else if (cnt2 > 0 && cnt1 > cnt2)
	{
//		ft_balance3(&lsta,rotate3);
//		***lsta = lstmp4;
		while(cnt2 > 0)
		{
			rotate5(&lsta);
			write(1,"ra\n",4);
//			printf("slide2\n");
			cnt2--;
		}
	}
}

void	ft_slide_a2(t_lst ***lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp4;
//	t_lst	**lstmp5;
	int		cnt1;
	int		cnt2;

//	lstmp5 = (t_lst**)malloc(sizeof(t_lst*));
	lstmp = NULL;
	lstmp4 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	if(**lsta && (**lsta)->next && (((t_numb*)(**lsta)->content)->val > ((t_numb*)((**lsta)->next)->content)->val))
	{
		swap1(&lsta);
		write(1,"sa\n",3);
	}
	lstmp = ft_copylst(**lsta);
	cnt1 = ft_balance(&lstmp,reverse1);
	lstmp4 = ft_copylst(**lsta);
	cnt2 = ft_balance(&lstmp4,rotate1);
		ft_freelst(&lstmp);
		ft_freelst(&lstmp4);
	if ((cnt1 > 0 && cnt1 < cnt2) || (cnt1 > 0 && cnt1 == cnt2))
	{
//		ft_balance3(&lsta,reverse3);
//		***lsta = lstmp;
		while(cnt1 > 0)
		{
			reverse4(&lsta);
			write(1,"rra\n",4);
//			printf("slide3\n");
			cnt1--;
		}
	}
	else if (cnt2 > 0 && cnt1 > cnt2)
	{
//		ft_balance3(&lsta,rotate3);
//		***lsta = lstmp4;
		while(cnt2 > 0)
		{
			rotate4(&lsta);
			write(1,"ra\n",4);
//			printf("slide3\n");
			cnt2--;
		}
	}
}

void	ft_slide_a2_uns(t_lst ***lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp4;
//	t_lst	**lstmp5;
	int		cnt1;
	int		cnt2;

//	lstmp5 = (t_lst**)malloc(sizeof(t_lst*));
	lstmp = NULL;
	lstmp4 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	if(**lsta && (**lsta)->next && (((t_numb*)(**lsta)->content)->val > ((t_numb*)((**lsta)->next)->content)->val))
	{
		swap1(&lsta);
		write(1,"sa\n",3);
	}
	lstmp = ft_copylst(**lsta);
	cnt1 = ft_balance(&lstmp,reverse1);
	lstmp4 = ft_copylst(**lsta);
	cnt2 = ft_balance(&lstmp4,rotate1);
		ft_freelst(&lstmp);
		ft_freelst(&lstmp4);
	if ((cnt1 > 0 && cnt1 < cnt2) || (cnt1 > 0 && cnt1 == cnt2))
	{
//		ft_balance3(&lsta,reverse3);
//		***lsta = lstmp;
		while(cnt1 > 0)
		{
			reverse4(&lsta);
			write(1,"rra\n",4);
//			printf("slide4\n");
			cnt1--;
		}
	}
	else if (cnt2 > 0 && cnt1 > cnt2)
	{
//		ft_balance3(&lsta,rotate3);
//		***lsta = lstmp4;
		while(cnt2 > 0)
		{
			rotate4(&lsta);
			write(1,"ra\n",4);
//			printf("slide4\n");
			cnt2--;
		}
	}
}

void	ft_slide_a4_uns(t_lst ****lsta)
{
	t_lst	*lstmp;
	t_lst	*lstmp4;
//	t_lst	**lstmp5;
	int		cnt1;
	int		cnt2;

//	lstmp5 = (t_lst**)malloc(sizeof(t_lst*));
	lstmp = NULL;
	lstmp4 = NULL;
	cnt1 = 0;
	cnt2 = 0;
	if(***lsta && (***lsta)->next && (((t_numb*)(***lsta)->content)->val > ((t_numb*)((***lsta)->next)->content)->val))
	{
		swap3(&lsta);
		write(1,"sa\n",3);
	}
	lstmp = ft_copylst(***lsta);
	cnt1 = ft_balance(&lstmp,reverse1);
	lstmp4 = ft_copylst(***lsta);
	cnt2 = ft_balance(&lstmp4,rotate1);
		ft_freelst(&lstmp);
		ft_freelst(&lstmp4);
	if ((cnt1 > 0 && cnt1 < cnt2) || (cnt1 > 0 && cnt1 == cnt2))
	{
//		ft_balance3(&lsta,reverse3);
//		***lsta = lstmp;
		while(cnt1 > 0)
		{
			reverse3(&lsta);
			write(1,"rra\n",4);
//			printf("slide5\n");
			cnt1--;
		}
	}
	else if (cnt2 > 0 && cnt1 > cnt2)
	{
//		ft_balance3(&lsta,rotate3);
//		***lsta = lstmp4;
		while(cnt2 > 0)
		{
			rotate3(&lsta);
			write(1,"ra\n",4);
//			printf("slide5\n");
			cnt2--;
		}
	}
}

*/


/*
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
	if(*lsta && (*lsta)->next && (((t_numb*)(*lsta)->content)->val < ((t_numb*)((*lsta)->next)->content)->val))
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
*/
