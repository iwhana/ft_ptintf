# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalia <iwhana@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 18:19:49 by amalia            #+#    #+#              #
#    Updated: 2021/12/09 16:46:36 by amalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
SRC = ft_printf.c ft_putchar.c ft_puthexptr.c ft_putlowhexnbr.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsignednbr.c ft_putuphexnbr.c
OBJ = $(SRC:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f *.o

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
