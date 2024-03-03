# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fneri <fneri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 16:39:12 by fneri             #+#    #+#              #
#    Updated: 2024/03/03 14:51:50 by fneri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

SRCS = push_swap.c \
	operation_push.c \
	operation_reverse_rotate.c \
	operation_rotate.c \
	operation_swap.c \
	list_function.c \
	parsing.c \
				
OBJS = $(SRCS:.c=.o)

LIBFT =	libft_extended/libft.a
PRINTF = ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(PRINTF)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

$(LIBFT):
	$(MAKE) -C libft_extended

$(PRINTF):
	$(MAKE) -C ft_printf

clean:	
	$(MAKE) clean -C libft_extended
	$(MAKE) clean -C ft_printf
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C libft_extended
	$(MAKE) fclean -C ft_printf
	$(RM) $(NAME)

re: fclean all


.PHONY:	all clean fclean re