# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablabib <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 21:57:58 by ablabib           #+#    #+#              #
#    Updated: 2024/07/18 21:57:59 by ablabib          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MY_SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

MY_OBJECTS = ${MY_SOURCES:.c=.o}

CC = cc

CFLAGS = -Wall -Werror -Wextra

INCLUDE = includes

NAME = libft.a

all:$(NAME)

$(NAME): $(MY_OBJECTS)
	ar rc $(NAME) $(MY_OBJECTS)
	ranlib $(NAME)

%.o: /%.c $(INCLUDE)/ft.h
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
