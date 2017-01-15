# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syusof <syusof@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/31 19:17:09 by syusof            #+#    #+#              #
#    Updated: 2017/01/16 00:31:33 by syusof           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = ft_balance.c ft_checkdel_op.c ft_checkdigit.c ft_checkdouble.c \
	   ft_checkentry.c ft_checkentryc.c ft_checkint.c ft_checkint1.c \
	   ft_checkint2.c ft_checkint3.c ft_checksort.c ft_copy_in_tab.c \
	   ft_copylst.c ft_free1.c ft_freelst.c ft_insertionsort.c \
	   ft_lstop_add.c ft_lstop_add2.c ft_p3.c ft_p5.c \
	   ft_p5c.c ft_p6.c ft_p7.c ft_parse1.c ft_parse1c.c ft_parse2.c \
	   ft_parse2c.c ft_printlst.c ft_quicksort.c ft_quicksort2.c \
	   ft_reverse_lst.c ft_slide.c ft_strlen_isdigit.c function.c\
	   function1.c function2.c function3.c function4.c function5.c \
	   get_next_line.c push.c push2.c push3.c push_swap.c reverse.c \
	   rotate.c rotate2.c swap.c swap2.c ft_checkspacestring.c function6.c \
	   ft_init.c ft_checkoption.c

OFILES = ft_balance.o ft_checkdel_op.o ft_checkdigit.o ft_checkdouble.o \
		 ft_checkentry.o ft_checkentryc.o ft_checkint.o ft_checkint1.o \
		 ft_checkint2.o ft_checkint3.o ft_checksort.o ft_copy_in_tab.o \
		 ft_copylst.o ft_free1.o ft_freelst.o ft_insertionsort.o \
		 ft_lstop_add.o ft_lstop_add2.o ft_p3.o ft_p5.o \
		 ft_p5c.o ft_p6.o ft_p7.o ft_parse1.o ft_parse1c.o ft_parse2.o \
		 ft_parse2c.o ft_printlst.o ft_quicksort.o ft_quicksort2.o \
		 ft_reverse_lst.o ft_slide.o ft_strlen_isdigit.o function.o \
		 function1.o function2.o function3.o function4.o function5.o \
		 get_next_line.o push.o push2.o push3.o push_swap.o reverse.o \
		 rotate.o rotate2.o swap.o swap2.o ft_checkspacestring.o function6.o \
		 ft_init.o ft_checkoption.o

FLAGS = -Wall -Werror -Wextra -I libft/includes/ -c

MAIN = push_swap.c

OMAIN = $(MAIN:.c=.o)

all: $(NAME)

$(NAME):
	@make -C libft/ re
	@gcc $(FLAGS) $(SRCS)
	@gcc -o $(NAME) $(OFILES)  -L libft/ -lft
	@make -C c1/ re
	@echo "-- done --"

clean:
	@rm -f $(OFILES)
	@make -C libft/ clean
	@make -C c1/ clean

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean
	@make -C c1/ fclean

re: fclean all
