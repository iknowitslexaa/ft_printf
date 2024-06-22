# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 11:17:56 by aneiva-d          #+#    #+#              #
#    Updated: 2024/06/11 11:27:13 by aneiva-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SOURCES = ft_printf.c

OBJS = ${SOURCES:.C=.O}

all: ${NAME}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

%.o: %.c
		${CC} -c ${CFLAGS} $?

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
