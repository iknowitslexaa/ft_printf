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

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SOURCES = ft_printf.c checkformat.c ft_printchar.c ft_printstr.c \
	ft_printptr.c ft_printnbr.c ft_printusg.c ft_printhexa.c

OBJS = ${SOURCES:.c=.o}

LIBFT_DIR = ./libft
LIBFT = ${LIBFT_DIR}/libft.a

all: ${NAME}

${NAME}: ${OBJS}
		${MAKE} -C ${LIBFT_DIR}
		cp ${LIBFT} $(NAME)
		ar rcs ${NAME} ${OBJS}
		ranlib $(NAME)
#		cc $(FLAGS) $(OBJS) $(NAME)

%.o: $(SOURCES)/%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	${MAKE} clean -C ${LIBFT_DIR}
	${RM} ${OBJS}

fclean: clean
		${MAKE} fclean -C ${LIBFT_DIR}
		${RM} ${NAME} libft.a

re: fclean all

.PHONY: all clean fclean re
