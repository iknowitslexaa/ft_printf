# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 18:51:09 by aneiva-d          #+#    #+#              #
#    Updated: 2024/06/01 14:15:35 by aneiva-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	 ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strchr.c \
	ft_substr.c ft_strtrim.c ft_split.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = ${SOURCES:.c=.o}

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJ = ${BONUS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

%.o: %.c
		${CC} -c ${CFLAGS} $?

bonus: all $(BONUS_OBJ)
		ar rc ${NAME} ${BONUS_OBJ}

clean: 
	${RM} ${OBJS} ${BONUS_OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY:  all clean fclean re
