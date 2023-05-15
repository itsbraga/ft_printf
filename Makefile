# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panther <panther@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 13:44:42 by panther           #+#    #+#              #
#    Updated: 2023/05/15 23:16:48 by panther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printchar.c \
		ft_printstr.c \
		ft_printptr.c \
		ft_printnbr.c \
		ft_printUint.c \
		ft_printHex.c \
		ft_printpercent.c \
		ft_printf.c

OBJECTS = $(SRCS:.c=.o)

NAME = libftprintf.a

INCS = incs/

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