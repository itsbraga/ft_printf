# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panther <panther@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 13:44:42 by panther           #+#    #+#              #
#    Updated: 2023/05/15 16:47:02 by panther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	utils.c \
		utils2.c 

OBJECTS = $(SRCS:.c=.o)

NAME = libftprintf.a

INCS = inc/ft_printf.h

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