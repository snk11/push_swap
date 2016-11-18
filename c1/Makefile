# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syusof <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/11 15:35:15 by syusof            #+#    #+#              #
#    Updated: 2016/11/18 16:50:48 by syusof           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../checker

SRCS = *.c

OFILES = $(SRCS:.c=.o)

FLAGS = -I ../libft/includes/ -c

MAIN = checker.c

OMAIN = $(MAIN:.c=.o)

all: $(NAME)

$(NAME):
	make -C ../libft/ re
	gcc $(FLAGS) $(SRCS)
	gcc -o $(NAME) $(OFILES) ../get_next_line.o ../reverse.o ../rotate.o ../swap.o ../push.o ../function.o ../ft_checkint.o ../ft_checkdouble.o ../ft_freelst.o ../ft_parse1.o -L ../libft/ ../ft_reverse_lst.o ../ft_strlen_isdigit.o ../ft_checkentry.o ../ft_checkdigit.o ../ft_p3.o ../ft_p4.o ../ft_p5.o ../ft_p6.o ../ft_p7.o ../ft_checkdel_op.o  ../ft_lstop_add.o ../ft_printlst.o ../ft_p4c.o ../ft_p5c.o ../ft_parse1c.o ../ft_checkentryc.o ../ft_free1.o ../ft_checkint1.o ../ft_checkint2.o ../ft_checkint3.o ../ft_lstop_add2.o ../ft_parse2.o ../ft_parse2c.o ../function1.o ../function2.o ../function3.o ../function4.o ../function5.o -lft

clean:
	rm -f $(OFILES)
	make -C ../libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C ../libft/ fclean

re: fclean all
