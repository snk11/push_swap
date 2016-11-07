/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 17:57:24 by syusof            #+#    #+#             */
/*   Updated: 2016/11/07 10:07:06 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

# include "libft/libft.h"

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
	void				*content;
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

int			ft_p1(t_lst ***lsta,int ac,char **av);
void	rotate1(t_lst ***lsta);
void	rotate3(t_lst *****lsta);
void	rotate4(t_lst ****lsta);
void	rotate5(t_lst ******lsta);
void	reverse1(t_lst ***lsta);
void	reverse3(t_lst *****lsta);
void	reverse4(t_lst ****lsta);
void	reverse5(t_lst ******lsta);
void	swap5(t_lst ******lsta);
void	swap4(t_lst ***lsta);
void	swap3(t_lst *****lsta);
void	swap1(t_lst ****lsta);
void		lst_add10(t_lst ****toplist, t_lst ******lst1);
void		lst_add9(t_lst ****toplist, t_lst *lst1);
void		lst_add8(t_lst ***toplist, t_lst ****lst1);
void		lst_add7(t_lst ****toplist, t_lst ***lst1);
void		lst_add5(t_lst **toplist, t_lst *t_lst1);
void		lst_add4(t_lst *****toplist, t_lst **lst1);
void		lst_add6(t_lst *****toplist, t_lst ***lst1);
void		lst_add2(t_lst ***toplist, t_lst *t_lst1);
void	push5(t_lst ***lstb, t_lst *****lsta);
void	push4(t_lst **lstb, t_lst ***lsta);
void	push3(t_lst ***lstb, t_lst **lsta);
void	push2(t_lst ****lstb, t_lst **lsta);
void	push1(t_lst **lstb, t_lst ****lsta);
void		lst_add3(t_lst **toplist, t_lst *****lst1);
void		lst_add(t_lst **toplist, t_lst **t_lst1);
//void		lst_add_del(t_lst **toplist, t_lst **t_lst1);
t_lst		*create_lst(void *content);
void	push(t_lst **lstb, t_lst **lsta);
void	reverse(t_lst **lsta);
void	rotate(t_lst **lsta);
void		ft_sort(t_lst **lsta);
void	ft_quicksort(t_lst ***lst1);
void	swap(t_lst **lsta);
int croissant(int a, int b);
t_lst		*sort_list(t_lst *lst, int (*cmp)(int,int));
int		ft_comptelem(t_lst *lsta);
int		get_index(t_lst **lstmp, int nbelemc);
int		get_indexquick(t_lst *lstmp, int nbelemc, t_lst *lsta2);
t_lst	*ft_reverse_lst(t_lst *lstmp);
int						get_next_line(int const fd, char **line);
int		ft_checkint(char *s);
void		lst_add_down2(t_lst **toplist, t_lst *t_lst1);
t_lst	*ft_copylst(t_lst *lstmp);
int	ft_balance(t_lst **lstmp2,void (*f)(t_lst***));
//int	ft_balance2(t_lst **lstmp2,void (*f)(t_lst**));
int		ft_checkdouble(t_lst *lsta,int d);
void	ft_printlst(t_lst *lsta);
void	ft_slide_a(t_lst ****lsta);
void	ft_slide_a1(t_lst *****lsta);
//void	ft_slide_b(t_lst **lsta);
void	ft_freelst(t_lst **lst1);
//void	ft_mergesort1(t_lst ***lsta);
void	ft_mergesort(t_lst ***lsta);
void	ft_bublesort(t_lst ***lstb);
void	ft_bublesort1_uns(t_lst **lstb);
void	ft_bublesort3(t_lst **lstb);
void		ft_insertionsort(t_lst ***lsta);
void		ft_insertionsort_p1(t_lst ****lsta,t_lst **lstb);
int		ft_checksort(t_lst *lstb);
void	ft_printlst(t_lst *lst1);
int		get_indexinsert(t_lst *lstmp, int limit);
int			get_indextopush(t_lst *lsta);

#endif
