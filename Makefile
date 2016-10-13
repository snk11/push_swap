# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syusof <syusof@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/31 19:17:09 by syusof            #+#    #+#              #
#    Updated: 2016/10/13 15:11:54 by syusof           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = *.c

OFILES = $(SRCS:.c=.o)

FLAGS = -I libft/includes/ -c

MAIN = push_swap.c

OMAIN = $(MAIN:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ re
	gcc $(FLAGS) $(SRCS)
	gcc -o $(NAME) $(OFILES)  -L libft/ -lft
	make -C c1/ re

clean:
	rm -f $(OFILES)
	make -C libft/ clean
	make -C c1/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean
	make -C c1/ fclean

re: fclean all
