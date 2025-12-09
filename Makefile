# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+          #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 10:23:28 by mabravo-          #+#    #+#              #
#    Updated: 2025/12/09 10:23:31 by mabravo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Werror -Wextra -c

RM = /bin/rm -f

SRCS = ft_format.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putpointer.c ft_putstr.c ft_puthex.c ft_putunbr.c

OBJECTS = $(SRCS:.c=.o)

NAME = libftprintf.a

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) $< -o $@

all: $(NAME)

clean : 
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME) 

re : fclean all

.PHONY: all clean fclean re