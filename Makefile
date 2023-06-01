# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asekmani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 17:21:09 by asekmani          #+#    #+#              #
#    Updated: 2022/12/01 12:18:11 by asekmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRCS= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_toupper.c \
		ft_tolower.c ft_isprint.c ft_strlcat.c ft_strlen.c ft_atoi.c \
		ft_memset.c ft_bzero.c ft_strnstr.c ft_strtrim.c ft_substr.c \
		ft_split.c ft_itoa.c ft_calloc.c ft_strjoin.c ft_putstr_fd.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_strncmp.c ft_strdup.c \
		ft_strlcpy.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strmapi.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_putchar_fd.c

SRCSBO= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstmap.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

INC_DIR= ./

OBJS= ${SRCS:.c=.o}

OBJS2 = ${SRCSBO:.c=.o}

CC= gcc
FLAGS= -Wall -Wextra -Werror
RM=rm -f

all: $(NAME)

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

bonus: ${OBJS} ${OBJS2}
	${AR} ${NAME} ${OBJS} ${OBJS2}

AR= ar rcs

.c.o:
	${CC} ${FLAGS} -I ${INC_DIR} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS} ${OBJS2}

fclean: clean
	${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re bonus

