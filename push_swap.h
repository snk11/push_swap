/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 17:57:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/02 17:05:04 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

# include "libft/libft.h"




#include <stdio.h>

# define BUFF_SIZE 8192

typedef struct		s_env
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];
	int		index;
}					t_env;

typedef struct			s_lst
{
	int					val;
	struct s_lst		*next;
}						t_lst;

typedef struct			s_lst2
{
	void				*content;
	struct s_lst2		*nextl;
	struct s_lst		*nextr;
}						t_lst2;

typedef struct			s_numb
{
	int					val;
}						t_numb;

void		lst_add(t_lst **toplist, t_lst **t_lst1);
//void		lst_add_del(t_lst **toplist, t_lst **t_lst1);
t_lst		*create_lst(int val);
void	push(t_lst **lstb, t_lst **lsta);
void	reverse(t_lst **lsta);
void	rotate(t_lst **lsta);
void		ft_sort(t_lst **lsta);
void		ft_quicksort(t_lst **lsta);
void	swap(t_lst **lsta);
int croissant(int a, int b);
t_lst		*sort_list(t_lst *lst, int (*cmp)(int,int));
//int		ft_comptelem(t_lst *lsta);
int		ft_comptelem(t_lst *lsta);
int		get_index(t_lst **lstmp, int nbelemc);
int		get_indexquick(t_lst **lstmp, int nbelemc, t_lst *lsta2);
t_lst	*ft_reverse_lst(t_lst *lstmp);
t_lst	*ft_reverse_lst2(t_lst *lstmp6,t_lst *lstmp);
int						get_next_line(int const fd, char **line);
int		ft_checkint(char *s);
void		lst_add2(t_lst **toplist, t_lst *t_lst1);
void		lst_add_down2(t_lst **toplist, t_lst *t_lst1);
t_lst	*ft_copylst(t_lst *lstmp);
int	ft_balance(t_lst **lstmp,void (*f)(t_lst**));
int	ft_balance2(t_lst **lstmp2,void (*f)(t_lst**));
int		ft_checkdouble(t_lst *lsta,int d);
void	ft_printlst(t_lst *lsta);
//void	ft_slide_a(t_lst **lsta);
void	ft_slide_a(t_lst **lsta);
void	ft_slide_b(t_lst **lsta);
void		ft_quicksort2(int *tab1);
void	ft_filltab(t_lst *lst1, int **tab);
int		ft_countelemtab(int *tab1);
void	ft_fillreversetab(int **tab2,int *tab1);
void	ft_copytab(int **tab2,int *tab1);
void	reverse2(int **tab);
void	rotate2(int **tab);
void	swap2(int **tab1);
int	ft_balance3(int **tab,void (*f)(int **));
void	ft_slide_a2(int **tab1);

#endif
