# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/24 09:35:53 by nbourhis          #+#    #+#              #
#    Updated: 2017/03/25 09:52:11 by nbourhis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c  srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o  ft_swap.o

all: $(NAME)

$(NAME) :
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(NAME) $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
