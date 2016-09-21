/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 17:57:24 by syusof            #+#    #+#             */
/*   Updated: 2016/09/21 11:10:52 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

# include "libft/libft.h"

typedef struct			s_lst
{
	void				*content;
	struct s_lst		*next;
}						t_lst;

typedef struct			s_numb
{
	int					val;
}						t_numb;

void		lst_add(t_lst **toplist, t_lst **t_lst1);
//void		lst_add_del(t_lst **toplist, t_lst **t_lst1);
t_lst		*create_lst(void *content);
void	push(t_lst **lstb, t_lst **lsta);
void	reverse(t_lst **lsta);
void	rotate(t_lst **lsta);
void		ft_sort(t_lst **lsta);
void		ft_quicksort(t_lst **lsta);
void	swap(t_lst **lsta);
int croissant(int a, int b);
t_lst		*sort_list(t_lst *lst, int (*cmp)(int,int));
int		ft_comptelem(t_lst *lsta);
int		get_index(t_lst **lstmp, int nbelemc);
int		get_indexquick(t_lst **lstmp, int nbelemc, t_lst *lsta2);

#endif
