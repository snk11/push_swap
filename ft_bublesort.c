/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bublesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:41:32 by syusof            #+#    #+#             */
/*   Updated: 2016/11/09 19:36:51 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



/*

void	ft_bublesort(t_lst ***lstb)
{
	int		isb;
	int		irb;
	int		i;

	isb = 1;
	while (isb == 1)
	{
		ft_slide_a(&lstb);
		isb = 0;
		irb = 0;
		i = 0;
		if (ft_checksort(**lstb) == 0)
		{
			while(i < (ft_comptelem(**lstb)) - 1)
			{
				//							ft_putstr("i = ");
				//							ft_putnbr(i);
				//							ft_putstr("\n");
				if(ft_comptelem(**lstb) >= 2)
				{
					if(((t_numb*)(**lstb)->content)->val > ((t_numb*)((**lstb)->next)->content)->val)
					{
						swap1(&lstb);
						write(1,"sb\n",3);
						isb = 1;
					}
				}
				if(ft_comptelem((**lstb)) >= 2)
				{
					rotate4(&lstb);
					write(1,"rb\n",3);
					irb = 1;
				}
				i++;
				//	ft_putstr("lstb = ");
				//	ft_printlst(lstb);
				//	ft_putstr("\n");
			}
		}
		//			if((ft_comptelem(lstb) % 2 = 0) && ft_comptelem(lstb) >= 2)
		if(irb == 1)
		{
			rotate4(&lstb);
			write(1,"rb\n",3);
		}
	}

}


void	ft_bublesort1_uns(t_lst **lstb)
{
	int		isb;
	int		irb;
	int		i;

	isb = 1;
	while (isb == 1)
	{

		isb = 0;
		irb = 0;
		i = 0;
		while(i < (ft_comptelem(*lstb)) - 1)
		{
			if(ft_comptelem(*lstb) >= 2)
			{
				if(((t_numb*)(*lstb)->content)->val < ((t_numb*)((*lstb)->next)->content)->val)
				{
					swap4(&lstb);
					write(1,"sb\n",3);
					isb = 1;
				}
			}
			if(ft_comptelem((*lstb)) >= 2)
			{
				rotate1(&lstb);
				write(1,"rb\n",3);
				irb = 1;
			}
			i++;
		}
		if (irb == 1)
		{
			rotate1(&lstb);
			write(1,"rb\n",3);
		}
	}

}

void	ft_bublesort3(t_lst **lstb)
{
	int		isb;
	int		irb;
	int		i;

	isb = 1;
	while (isb == 1)
	{
		//		ft_slide_a(&lstb);
		isb = 0;
		irb = 0;
		i = 0;
		if (ft_checksort(*lstb) == 0)
		{
			while(i < (ft_comptelem(*lstb)) - 1)
			{
				//							ft_putstr("i = ");
				//							ft_putnbr(i);
				//							ft_putstr("\n");
				if(ft_comptelem(*lstb) >= 2)
				{
					if(((t_numb*)(*lstb)->content)->val > ((t_numb*)((*lstb)->next)->content)->val)
					{
						swap4(&lstb);
						write(1,"sb\n",3);
						isb = 1;
					}
				}
				if(ft_comptelem((*lstb)) >= 2)
				{
					rotate1(&lstb);
					write(1,"rb\n",3);
					irb = 1;
				}
				i++;
				//	ft_putstr("lstb = ");
				//	ft_printlst(lstb);
				//	ft_putstr("\n");
			}
		}
		//			if((ft_comptelem(lstb) % 2 = 0) && ft_comptelem(lstb) >= 2)
		if(irb == 1)
		{
			rotate1(&lstb);
			write(1,"rb\n",3);
		}
	}

}

*/