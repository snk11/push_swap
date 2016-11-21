# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syusof <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/11 15:35:15 by syusof            #+#    #+#              #
#    Updated: 2016/11/21 17:00:23 by syusof           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../checker

SRCS = checker.c ft_checker_p1.c ft_checker_p2.c ft_checknothing.c \
	   ft_comparestr.c ft_readline.c ft_readline2.c

OFILES = checker.o ft_checker_p1.o ft_checker_p2.o ft_checknothing.o \
		 ft_comparestr.o ft_readline.o ft_readline2.o

OFILESUP = ../get_next_line.o ../reverse.o ../rotate.o ../swap.o ../push.o \
		   ../function.o ../ft_checkint.o ../ft_checkdouble.o ../ft_freelst.o \
		   ../ft_parse1.o ../ft_reverse_lst.o ../ft_strlen_isdigit.o \
		   ../ft_checkentry.o ../ft_checkdigit.o ../ft_p3.o \
		   ../ft_p5.o ../ft_p6.o ../ft_p7.o ../ft_checkdel_op.o  \
		   ../ft_lstop_add.o ../ft_printlst.o ../ft_p5c.o \
		   ../ft_parse1c.o ../ft_checkentryc.o ../ft_free1.o \
		   ../ft_checkint1.o ../ft_checkint2.o ../ft_checkint3.o \
		   ../ft_lstop_add2.o ../ft_parse2.o ../ft_parse2c.o ../function1.o \
		   ../function2.o ../function3.o ../function4.o ../function5.o \
		   ../push2.o ../push3.o ../rotate2.o ../swap2.o \
		   ../ft_checkspacestring.o ../function6.o

FLAGS = -Wall -Werror -Wextra -I ../libft/includes/ -c

MAIN = checker.c

OMAIN = $(MAIN:.c=.o)

all: $(NAME)

$(NAME):
	make -C ../libft/ re
	gcc $(FLAGS) $(SRCS)
	gcc -o $(NAME) $(OFILES) $(OFILESUP) -L ../libft/ -lft

clean:
	rm -f $(OFILES)
	make -C ../libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C ../libft/ fclean

re: fclean all
