/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 17:57:24 by syusof            #+#    #+#             */
/*   Updated: 2017/01/20 13:34:11 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

# include "libft/libft.h"

# define BUFF_SIZE 8192

typedef struct			s_env
{
	int					fd;
	int					ret;
	char				buf[BUFF_SIZE + 1];
	int					index;
}						t_env;

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

typedef struct			s_pars
{
	int					i;
	int					k;
	int					ind1;
	char				*sbegi;
}						t_pars;

typedef struct			s_op
{
	int					pos;
	int					ind;
}						t_op;

typedef struct			s_read
{
	int					indko;
	int					inderror;
	int					nbelema;
}						t_read;

typedef struct			s_option
{
	int					i;
	int					indoption;
	int					indc;
	int					indf;
	int					indl;
	int					ac;
	char				**av;
}						t_option;

int						ft_checkoption(char *s, t_option *option);
void					ft_init(t_option *option, int ac, char **av);
int						ft_checkspacestring(char *s);
int						ft_strlen_isdigit(char *s);
int						ft_checknothing(char *line);
int						ft_comparestr(char *line, char *s);
void					ft_lstop_add3(t_lst ******lstop, int p);
void					ft_lstop_add2(t_lst ****lstop, int p);
void					ft_lstop_add1(t_lst *****lstop, int p);
void					rotate1(t_lst ***lsta);
void					rotate3(t_lst *****lsta);
void					rotate4(t_lst ****lsta);
void					rotate5(t_lst ******lsta);
void					reverse1(t_lst ***lsta);
void					reverse3(t_lst *****lsta);
void					reverse4(t_lst ****lsta);
void					reverse5(t_lst ******lsta);
void					swap5(t_lst ******lsta);
void					swap4(t_lst ***lsta);
void					swap3(t_lst *****lsta);
void					swap1(t_lst ****lsta);
void					lst_add22(t_lst ******toplist, t_lst *******lst1);
void					lst_add21(t_lst *******toplist, t_lst ******lst1);
void					lst_add20(t_lst *****toplist, t_lst ******lst1);
void					lst_add19(t_lst ******toplist, t_lst *****lst1);
void					lst_add18(t_lst ****toplist, t_lst *****lst1);
void					lst_add17(t_lst *****toplist, t_lst ****lst1);
void					lst_add16(t_lst ********toplist, t_lst ******lst1);
void					lst_add15(t_lst *******toplist, t_lst *lst1);
void					lst_add14(t_lst *****toplist, t_lst *lst1);
void					lst_add13(t_lst ******toplist, t_lst *lst1);
void					lst_add12(t_lst *******toplist, t_lst *****lst1);
void					lst_add11(t_lst ******toplist, t_lst ****lst1);
void					lst_add10(t_lst ****toplist, t_lst ******lst1);
void					lst_add9(t_lst ****toplist, t_lst *lst1);
void					lst_add8(t_lst ***toplist, t_lst ****lst1);
void					lst_add7(t_lst ****toplist, t_lst ***lst1);
void					lst_add5(t_lst **toplist, t_lst *t_lst1);
void					lst_add4(t_lst *****toplist, t_lst **lst1);
void					lst_add6(t_lst *****toplist, t_lst ***lst1);
void					lst_add2(t_lst ***toplist, t_lst *t_lst1);
void					push14(t_lst *****lstb, t_lst ******lsta);
void					push13(t_lst ******lstb, t_lst *****lsta);
void					push12(t_lst ****lstb, t_lst *****lsta);
void					push11(t_lst *****lstb, t_lst ****lsta);
void					push10(t_lst ***lstb, t_lst ****lsta);
void					push9(t_lst ****lstb, t_lst ***lsta);
void					push8(t_lst *******lstb, t_lst *****lsta);
void					push7(t_lst ******lstb, t_lst ****lsta);
void					push6(t_lst *****lstb, t_lst ***lsta);
void					push5(t_lst ***lstb, t_lst *****lsta);
void					push4(t_lst **lstb, t_lst ***lsta);
void					push3(t_lst ***lstb, t_lst **lsta);
void					push2(t_lst ****lstb, t_lst **lsta);
void					push1(t_lst **lstb, t_lst ****lsta);
void					lst_add3(t_lst **toplist, t_lst *****lst1);
void					lst_add(t_lst **toplist, t_lst **t_lst1);
t_lst					*create_lst(t_numb *e);
void					push(t_lst **lstb, t_lst **lsta);
void					rotate(t_lst **lsta);
void					ft_sort(t_lst **lsta);
void					ft_quicksort(t_lst ***lst1, t_lst ***lstop);
void					ft_quicksort_p1(t_lst ****lsta, t_lst **lstb,
		t_lst ****lstop, int index);
void					ft_quicksort_p2(t_lst ****lsta, t_lst **lstb,
		t_lst ****lstop, int index);
void					swap(t_lst **lsta);
t_lst					*sort_list(t_lst *lst, int (*cmp)(int, int));
int						ft_comptelem(t_lst *lsta);
int						get_index(t_lst **lstmp, int nbelemc);
t_lst					*ft_reverse_lst(t_lst ***lstmp);
int						get_next_line(int const fd, char **line);
int						ft_checkint(char *s);
void					lst_add_down2(t_lst **toplist, t_lst *t_lst1);
t_lst					*ft_copylst(t_lst *lstmp);
int						ft_balance(t_lst **lstmp2, void (*f)(t_lst***));
int						ft_checkdouble(t_lst *lsta, int d);
void					ft_printlst(t_lst *lsta);
void					ft_printlstc(t_lst *lst1);
void					ft_printlstc_p1(t_lst *lst1);
void					ft_printlstf(t_lst *lst1);
void					ft_printlstl(t_lst *lsta);
void					ft_slide_a(t_lst ****lsta, t_lst ****lstop);
void					ft_slide_a_p1(t_lst *****lsta, t_lst *****lstop,
		int cnt1);
void					ft_slide_a_p2(t_lst *****lsta, t_lst *****lstop,
		int cnt2);
void					ft_slide_a_p3(t_lst *****lsta, t_lst *****lstop);
void					ft_slide_a_p4(t_lst *****lsta, t_lst *****lstop);
void					ft_freelst(t_lst **lst1);
void					ft_freelst4(t_lst ****lst1);
void					ft_mergesort(t_lst ****lsta, t_lst **lstb, int nbelema);
void					ft_insertionsort_p2(t_lst ****lsta, t_lst **lstb);
void					ft_insertionsort2(t_lst ****lsta, t_lst **lstb,
		t_lst ****lstop);
void					ft_insertionsort_p21(t_lst *****lsta,
		t_lst ***lstb, t_lst *****lstop);
void					ft_insertionsort_p21_p1(t_lst ******lsta,
		t_lst ****lstb, t_lst ******lstop, int index);
void					ft_insertionsort_p21_p2(t_lst ******lsta,
		t_lst ****lstb, t_lst ******lstop, int index);
int						ft_checksort(t_lst *lstb);
void					ft_printlst(t_lst *lst1);
int						get_indexinsert2(t_lst *lstmp, int limit);
int						get_indextopush2(t_lst *lsta, int valpivot);
void					get_indextopush2_p1(t_lst *lsta, int valpivot,
		int *index, int *ind1);
int						get_indexpivot(t_lst *lsta, int valpivot);
int						get_valpivot(t_lst *lsta);
void					get_valpivot_p1(int	**tab, int nbelema);
void					ft_copy_in_tab(t_lst *lsta, int	**tab);
void					ft_lstdel(t_lst *****toplist, int pos);
void					ft_lstdel_p1(t_lst **lstmp, t_lst **lstmp2);
void					ft_lstdel_p2(t_lst ******toplist, t_lst **lstmp);
void					ft_lstdel2(t_lst ******toplist, int pos);
void					ft_lstdel2_p1(t_lst **lstmp, t_lst **lstmp2);
void					ft_lstdel2_p2(t_lst *******toplist, t_lst **lstmp);
void					ft_checkdel_op(t_lst ****lstop);
void					ft_checkdel_op0(int *ind, int *pos);
int						ft_checkdel_op1(t_lst *lstop);
void					ft_lstop_add_down0(t_lst ***toplist, int p);
void					ft_lstop_add_down1(t_lst *****toplist, int p);
void					ft_lstop_add_down2(t_lst ****toplist, int p);
void					ft_lstop_add_down3(t_lst ******toplist, int p);
void					ft_lstop_add_down4(t_lst *******toplist, int p);
int						ft_getinxtodel(t_lst *lstop, int pos);
int						ft_checkentry(t_option *option);
int						ft_checkentryc(int ac, char **av);
int						ft_checkdigit(char *s1);
void					ft_p3(t_lst ***lsta, t_lst ***lstop);
int						ft_p5(int ac, char **av);
int						ft_p5c(int ac, char **av);
int						ft_p6(t_lst ***lsta, t_lst ***lstop, t_option *option);
void					ft_p7(t_lst ***lstop, t_lst ***lsta, t_option *option);
int						ft_parse1(t_lst ***lsta, char *s);
int						ft_parse1_p1(char *s, int *ind1, int i);
int						ft_parse1_p10(t_lst ****lsta, char *s, t_pars *p);
int						ft_parse1_p2(t_lst *****lsta, int i, char *sbegi);
int						ft_parse1_p2_p1(t_lst ******lsta, char *s1, t_numb *e);
int						ft_parse1_p2_p2(t_lst ******lsta, char *s1, t_numb *e);
void					ft_parse1_p2_p3(char **s1);
int						ft_parse1_p3(char *s, int *ind1);
int						ft_parse1c(t_lst ***lsta, char *s);
int						ft_parse1c_p1(char *s, int *ind1, int i);
int						ft_parse1c_p10(t_lst ****lsta, char *s, t_pars *p);
int						ft_parse1c_p2(t_lst *****lsta, int i, char *sbegi);
int						ft_parse1c_p2_p1(t_lst ******lsta, char *s1, t_numb *e);
int						ft_parse1c_p2_p2(t_lst ******lsta, char *s1, t_numb *e);
void					ft_parse1c_p2_p3(char **s1);
int						ft_parse1c_p3(char *s, int *ind1);
int						ft_checkint_p1(char *s1);
int						ft_checkint_p2(char *s1);
int						ft_checkint_p2_p1(char *s1);
int						ft_checkint_p2_p1_p1(char *s1);
int						ft_checkint_p2_p1_p4(char *s1);
int						ft_checkint_p2_p1_p7(char *s1);
int						ft_checkint_p2_p1_p42(char *s1);
int						ft_checkint_p2_p1_p8(char *s1);
int						ft_checkint_p2_p1_p3(char *s1);
int						ft_checkint_p2_p2(char *s1);
int						ft_checkint_p2_p2_p1(char *s1);
int						ft_checkint_p2_p2_p4(char *s1);
int						ft_checkint_p2_p2_p7(char *s1);
int						ft_checkint_p2_p2_p42(char *s1);
int						ft_checkint_p2_p2_p8(char *s1);
int						ft_checkint_p2_p2_p3(char *s1);
void					ft_readline(char *line, t_lst ****lsta,
		t_lst ***lstb, t_read *r);
int						ft_checker_p1(t_lst ***lsta, t_lst **lstb, t_read *r);
int						ft_checker_p2(t_lst ***lsta, t_lst **lstb, t_read *r);
int						ft_checker_p2_p1(t_lst ****lsta, t_read *r);
void					ft_free1(char **line);
int						ft_readline_p1(t_lst *****lsta, t_lst ****lstb,
		char *line);
int						ft_readline_p2(t_lst *****lsta, char *line);
int						ft_readline_p3(t_lst ****lstb, char *line);
int						ft_readline_p4(t_lst *****lsta, t_lst ****lstb,
		char *line);
int						ft_readline_p5(t_lst *****lsta, t_lst ****lstb,
		char *line);
int						ft_readline_p6(t_lst *****lsta, t_lst ****lstb,
		t_read *r, char *line);

#endif
