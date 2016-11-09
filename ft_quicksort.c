/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:21:40 by syusof            #+#    #+#             */
/*   Updated: 2016/11/09 13:50:55 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"





#include <stdio.h>
/*
int		get_valp(int *tab)
{
	int		i;
	int		w;
	int		ind1;

//	while(tab[i])
//		i++;
//	printf("i = %d\n",i * 25 / 100);
//	return (tab[i * 5 / 100]);
	if (tab[10])
		return (tab[10]);
	else
		return (tab[0]);
}
*/

int			get_valpivot(t_lst *lsta)
{
	int		ref;
	int		max;
	int		diff;
	int		valpivot;
	t_lst	*lstabegi;
	int		nbelema;
	int		*tab;
	int		i;
	int		w;
	int		ind1;
//	int		tab[4];

	lstabegi = lsta;
	nbelema = ft_comptelem(lsta);
//	printf("nbelema = %d\n",nbelema);
	tab = (int*)malloc(sizeof(int)*nbelema);
	i = 0;
//	tab[i] = 9;
//	while(tab[i])
//	{
//		printf("%d\n",i);
//		i++;
//	}
	ft_copy_in_tab(lsta,&tab);
//	ft_sort_tab(&tab, nbelema);

	ind1 = 1;
	while(ind1 == 1)
	{
		i = 0;
		ind1 = 0;
		while(i < nbelema - 2)
		{
			if((tab)[i] > (tab)[i+1])
			{
				w = (tab)[i];
				(tab)[i] = (tab)[i+1];
				(tab)[i+1] = w;
				ind1 = 1;
			}
			i++;
		}
	}
//	valpivot = get_valp(&tab);
//	return (valpivot);
//	return (tab[i * 5 / 100]);
	if (nbelema > 35)
		return (tab[35]);
	else if (nbelema >= 1)
		return (tab[0]);
	return (-1);
}

int			get_indextopush2(t_lst *lsta,int valpivot)
{
	int		index;
	int		i;
//	int		min;
	int		ind1;
	t_lst	*lstabegi;

	index = -1;
	ind1 = 0;
	lstabegi = lsta;
	while(lsta && lsta->next && ind1 == 0)
	{
		if(((t_numb*)lsta->content)->val < valpivot)
		{
//			min = ((t_numb*)lsta->content)->val;
			index = i;
			ind1 = 1;
		}
		lsta = lsta->next;
		i++;
	}
	if (ind1 == 0 && lsta)
	{
		if(((t_numb*)lsta->content)->val < valpivot)
		{
//			min = ((t_numb*)lsta->content)->val;
			index = i;
			ind1 = 1;
		}
	}
	lsta = lstabegi;
	i = 0;
	while(index == -1 && lsta && lsta->next)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
			index = i;
		lsta = lsta->next;
		i++;
	}
	if(index == -1 && lsta)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
			index = i;
	}
	/*
	while(lsta && lsta->next && ind1 == 0)
	{
		if(((t_numb*)lsta->content)->val < valpivot)
		{
			min = ((t_numb*)lsta->content)->val;
			index = i;
			ind1 = 1;
		}
		lsta = lsta->next;
		i++;
	}
	if (ind1 == 0 && lsta)
	{
		if(((t_numb*)lsta->content)->val < valpivot)
		{
			min = ((t_numb*)lsta->content)->val;
			index = i;
			ind1 = 1;
		}
	}
	i = 0;
	lsta = lstabegi;
	while(ind1 == 1 && lsta && lsta->next)
	{
		if(((t_numb*)lsta->content)->val < valpivot && ((t_numb*)lsta->content)->val < min)
		{
			min = ((t_numb*)lsta->content)->val;
			index = i;
		}
		lsta = lsta->next;
		i++;
	}
	if(ind1 == 1 && lsta)
	{
		if(((t_numb*)lsta->content)->val < valpivot && ((t_numb*)lsta->content)->val < min)
		{
			min = ((t_numb*)lsta->content)->val;
			index = i;
		}
	}
	lsta = lstabegi;
	i = 0;
	while(index == -1 && lsta && lsta->next)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
			index = i;
		lsta = lsta->next;
		i++;
	}
	if(index == -1 && lsta)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
			index = i;
	}
	*/
	return (index);
}

int			get_indexpivot(t_lst *lsta,int valpivot)
{
	int		index;
	int		i;

	index = -1;
	i = 0;
	while(lsta && lsta->next)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
		{
			index = i;
		}
		lsta = lsta->next;
		i++;
	}
	if(lsta)
	{
		if(((t_numb*)lsta->content)->val == valpivot)
		{
			index = i;
		}
	}
	return (index);
}

int			get_indextopush1(t_lst *lsta,int indpivot)
{
	int		index;
	int		i;
	int		ref;
	int		min;
	t_lst	*lstabegi;

	lstabegi = lsta;
	index = 0;
	while(lsta && lsta->next)
	{
		lsta = lsta->next;
		index++;
	}
	ref = ((t_numb*)lsta->content)->val;
	min = ref;
	lsta = lstabegi;
	i = 0;
	while(lsta && lsta->next)
	{
		if(((t_numb*)lsta->content)->val < ref && ((t_numb*)lsta->content)->val < min)
		{
			index = i;
			min = (((t_numb*)lsta->content)->val);
		}
		lsta = lsta->next;
		i++;
	}
	return (index);
}

int			get_indextopush(t_lst *lsta)
{
	int		index;
	int		i;
	int		ref;
	int		min;
	t_lst	*lstabegi;

	lstabegi = lsta;
	index = 0;
	while(lsta && lsta->next)
	{
		lsta = lsta->next;
		index++;
	}
	ref = ((t_numb*)lsta->content)->val;
	min = ref;
	lsta = lstabegi;
	i = 0;
	while(lsta && lsta->next)
	{
		if(((t_numb*)lsta->content)->val < ref && ((t_numb*)lsta->content)->val < min)
		{
			index = i;
			min = (((t_numb*)lsta->content)->val);
		}
		lsta = lsta->next;
		i++;
	}
	return (index);
}


void	ft_quicksort(t_lst ***lsta)
{
	int		index;
	int		indexpivot;
	int		nbelema;
	int		nbelemc;
	int		i;
	int		j;
	int		ind1;
	int		valpivot;
	t_lst	*lstb;

	lstb = NULL;
	ind1 = 0;
	//	ft_slide_a(&lsta);
	if (ft_checksort(**lsta) == 0)
	{

		while (**lsta)
		{
			j = 0;
			valpivot = get_valpivot(**lsta);
//				ft_printlst(**lsta);
//			printf("valpivot = %d\n",valpivot);
			indexpivot = get_indexpivot(**lsta,valpivot);
			//			printf("index = %d\n",index);
			//			printf("pivot = %d\n",indpivot);
			//			indpivot = ft_comptelem(**lsta);
			//			while(**lsta && ind1 == 0)
			while(**lsta && get_indextopush2(**lsta,valpivot) != -1)
			{
				//				ft_slide_a(&lsta);
				nbelema = ft_comptelem(**lsta);
				//			if(nbelema > 1)
				index = get_indextopush2(**lsta,valpivot);
//				printf("indextopush = %d\n",index);
				i = 0;
				if (nbelema % 2 == 0)
				{
					if (index < nbelema / 2)
					{
						while( i < index)
						{
							rotate4(&lsta);
							write(1,"ra\n",3);
							i++;
						}
					}
					else if (index >= nbelema / 2)
					{
						while( i < nbelema  - index)
						{
							reverse4(&lsta);
							write(1,"rra\n",4);
							i++;
						}
					}
					push1(&lstb,&lsta);
					write(1,"pb\n",3);
				}
				else if (nbelema % 2 != 0)
				{
					if (index <= nbelema / 2)
					{
						while( i < index)
						{
							rotate4(&lsta);
							write(1,"ra\n",3);
							i++;
						}
					}
					else if (index > nbelema / 2)
					{
						while( i < nbelema  - index)
						{
							reverse4(&lsta);
							write(1,"rra\n",4);
							i++;
						}
					}
					push1(&lstb,&lsta);
					write(1,"pb\n",3);
				}
//				ft_printlst(**lsta);
			}
		}
//		ft_printlst(lstb);
		ft_insertionsort2(&lsta,&lstb);
		/*
		   while(lstb)
		   {
		   push2(&lsta,&lstb);
		   write(1,"pa\n",3);
		   }
		   */
	}
}


int		get_indexquick(t_lst *lstmp, int nbelemc, t_lst *lsta2)
{
	int index;
	int ind1;

	ind1 = 0;
	index = -1;
	while (lstmp && ind1 == 0 && index < nbelemc - 1)
	{
		if(((t_numb*)(lstmp)->content)->val <= ((t_numb*)(lsta2)->content)->val)
		{
			index++;
			(lstmp) = (lstmp)->next;
		}
		else
		{
			ind1 = 1;
			index++;
		}
	}
	if (lstmp == NULL || index == nbelemc - 1)
		return -1;
	return index;
}




/*
   void	ft_quicksort(t_lst ***lsta)
   {
   t_lst	*lstmp7;
   t_lst	*lsta2;
   int		ind1;
   int		ind2;
   int		index;
   int		index3;
   int		index4;
   int		index5;
   int		nbelem2;
   int		nbelemc;
   int		nbelema;
   int		cnt3;
   t_lst	*lstb;

   index = 0;
   index4 = 0;
   index5 = 0;
   lstmp7 = NULL;
   lsta2 = NULL;
   lstb = NULL;
   cnt3 = 0;
   lsta2 = ft_reverse_lst(**lsta);
   nbelema = ft_comptelem(**lsta);
   nbelemc = ft_comptelem(lsta2);
   ind1 = 1;
   ind2 = 0;
   while (ind1 == 1 || lsta2)
   {
   ft_slide_a(&lsta);
   if (ind1 == 1)
   {
   ft_freelst(&lsta2);
   lsta2 = ft_reverse_lst(**lsta);
   index3 = 0;
   }
   ind1 = 0;
   {
   {
   nbelemc = ft_comptelem(lsta2);
   index = nbelemc - 1;
   if  (**lsta)
   {
   index4 = get_indexquick(**lsta,nbelemc,lsta2);
   }
   if (index4 > -1)
   {
   ind1 = 1;
   {
   if (index != 1)
   {
   while (index > 0)
   {
   push1(&lstb, &lsta);
   write(1,"pb\n",3);
   index--;
   }
   if (((nbelema - index3) / 2) < (index4 + 1 + 1))
   {
   index5 = index4;
   cnt3 = 0;
   while ((nbelema - index3) - (index4 + 1 + 1) > 0)
   {
   rotate(&lstb);
   write(1,"rb\n",3);
   index4++;
   cnt3++;
   }
   index4 = index5;
}
else if (((nbelema - index3) / 2) >= (index4 + 1 + 1))
{
	index5 = index4;
	cnt3 = 0;
	while (index4 + 1 > 0)
	{
		reverse(&lstb);
		write(1,"rrb\n",4);
		index4--;
		cnt3++;
	}
	index4 = index5;
}
push2(&lsta,&lstb);
write(1,"pa\n",3);
swap1(&lsta);
write(1,"sa\n",3);
push1(&lstb, &lsta);
write(1,"pb\n",3);
nbelem2 = ft_comptelem(lstb);
if (((nbelema - index3) / 2) < (index4 + 1 + 1))
{
	while (cnt3 > 0)
	{
		reverse(&lstb);
		write(1,"rrb\n",4);
		cnt3--;
	}
}
if (((nbelema - index3) / 2) >= (index4 + 1 + 1))
{
	while (cnt3 > 0)
	{
		rotate(&lstb);
		write(1,"rb\n",4);
		cnt3--;
	}
}
while(nbelem2 > 0)
{
	push2(&lsta, &lstb);
	write(1,"pa\n",3);
	nbelem2--;
}
}
else
{
	swap1(&lsta);
	write(1,"sa\n",3);
}
}
}
}
lstmp7 = lsta2;
lsta2 = lsta2->next;
free(lstmp7->content);
lstmp7->content = NULL;
free(lstmp7);
lstmp7 = NULL;
index3++;
}
}
if(lsta2)
	ft_freelst(&lsta2);
	}
*/
