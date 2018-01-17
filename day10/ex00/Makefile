# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tifuret <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/13 11:49:26 by tifuret           #+#    #+#              #
#    Updated: 2017/08/21 19:14:00 by tifuret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

HEADER = includes/

all: $(NAME)

$(NAME):
		gcc -c $(SRC) -I $(HEADER)
		ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
