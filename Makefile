# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 13:44:42 by panther           #+#    #+#              #
#    Updated: 2023/05/23 18:30:37 by annabrag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printchar.c \
		ft_printstr.c \
		ft_printptr.c \
		ft_printnbr.c \
		ft_print_unsigned_int.c \
		ft_printhex.c \
		ft_printf.c \
		ft_strlen.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c

OBJECTS = $(SRCS:.c=.o)

NAME = libftprintf.a

INCS = ft_printf.h

CFLAGS = -Wall -Wextra -Werror

LIBC = ar -rcs

.c.o:
		cc $(CFLAGS) -I $(INCS) -c $< -o $@
		
$(NAME): $(OBJECTS)
		 $(LIBC) $(NAME) $(OBJECTS)

all: $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
