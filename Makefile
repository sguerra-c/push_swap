# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 17:37:10 by sguerra-          #+#    #+#              #
#    Updated: 2021/11/09 16:36:55 by sguerra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		push_swap

LIB_DIR =	libft/

SRC =		src/push_swap.c			\
			src/insert_first_elem.c	\
			src/add_end_stack.c		\
			src/check_value.c		\
			src/print_stack.c		\
			src/sort_small_stack.c	\
			src/swap.c				\
			src/swap_both.c			\
			src/push.c				\
			src/rotate.c			\
			src/rotate_both.c		\
			src/rev_rotate.c		\
			src/rev_rotate_both.c	\
			src/check_sort.c		\
			src/check_rev_sort.c	\
			src/new_sort.c			\
			src/new_sort_rev.c		\
			src/ft_sort_int_tab.c	\
			src/move.c				\
			src/move_to_b_again.c	\

OBJ			= $(SRC:.c=.o)

CC =		gcc

CFLAGS =	-Wall -Werror -Wextra
 
all:		$(NAME)

$(NAME):	$(OBJ) 
			make -C $(LIB_DIR) -s
			gcc -o $(NAME) $(OBJ) -L $(LIB_DIR) -lft
		
.PHONY:		all clean fclean re

clean:	
			rm -f $(OBJ)
			make clean -C $(LIB_DIR) -s

fclean:		clean
			rm -f $(NAME)
			make fclean -C $(LIB_DIR) -s
			
re: 		fclean all
