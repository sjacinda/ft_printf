# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 13:40:04 by sjacinda          #+#    #+#              #
#    Updated: 2021/11/09 22:25:11 by sjacinda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c	ft_support_func.c \
			ft_c.c	ft_s.c	ft_p.c	ft_di.c	ft_u.c	ft_xX.c

HEADER	=	ft_printf.h

OBJ	=	$(patsubst %.c, %.o, $(SRCS))

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME)	$?

all	:	$(NAME)

%.o	:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJ)

fclean	:	clean
	rm -rf $(NAME)

re	:	fclean all
