# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 07:41:37 by guilrodr          #+#    #+#              #
#    Updated: 2024/01/31 16:10:02 by guilrodr         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 #-fsanitize=address
RM = rm -f
SRC = main.c \
		0_error_handler/general_error_handler.c \
		0_init_variables/init_all.c \
		1_parse/1_parse.c \
		1_parse/ft_rebuild.c \
		2_fill/1_fill_stack_a.c \
		2_fill/check_duplicates.c \
		3_check/check_size.c \
		3_check/check_sort.c \
		4_operations/pa.c \
		4_operations/pb.c \
		4_operations/ra.c \
		4_operations/sa.c \
		4_operations/sb.c \
		4_operations/rra.c \
		4_operations/algorithm.c \
		4_operations/1_sort_master.c \
		4_operations/sort_five.c \
		4_operations/sort_four.c \
		4_operations/sort_three.c \
		4_operations/sort_two.c \
		minilib/ft_atoi.c \
		minilib/ft_putstr_fd.c \

all:		$(NAME)

$(NAME): $(SRC) includes/push_swap.h
	$(CC) ${CFLAGS} $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all
.PHONY: all clean fclean re
