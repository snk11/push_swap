# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syusof <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/11 15:35:15 by syusof            #+#    #+#              #
#    Updated: 2016/11/09 18:52:12 by syusof           ###   ########.fr        #
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
	gcc -o $(NAME) $(OFILES) ../get_next_line.o ../reverse.o ../rotate.o ../swap.o ../push.o ../function.o ../ft_checkint.o ../ft_checkdouble.o ../ft_freelst.o ../ft_parse1.o -L ../libft/ ../ft_reverse_lst.o -lft

clean:
	rm -f $(OFILES)
	make -C ../libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C ../libft/ fclean

re: fclean all
