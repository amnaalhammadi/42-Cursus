# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amh <amh@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 14:47:01 by aal-hamm          #+#    #+#              #
#    Updated: 2022/08/18 22:02:03 by amh              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_putchar.c		\
	   ft_putstr.c 		\
	   ft_putnbr.c		\
	   ft_unsigned.c	\
	   ft_hex.c 		\
	   ft_percent.c 	\
	   ft_ptr.c 		\
	   ft_printf.c
	   
OBJS = $(SRCS:.c=.o) 

CC = gcc

CFLAGS =  -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	