#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abourin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 13:55:47 by abourin           #+#    #+#              #
#    Updated: 2019/10/10 18:36:16 by abourin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = ft_isascii.c ft_memcmp.c ft_putnbr_fd.c ft_strlcpy.c ft_strtrim.c ft_atoi.c ft_isdigit.c ft_memcpy.c ft_putstr_fd.c ft_strlen.c ft_substr.c ft_bzero.c ft_split.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_tolower.c ft_calloc.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_isalnum.c ft_memccpy.c ft_putchar_fd.c ft_strjoin.c ft_strnstr.c ft_isalpha.c ft_memchr.c ft_putendl_fd.c ft_strlcat.c ft_strrchr.c

SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${SRCSBONUS:.c=.o}

NAME = libft.a

NAMEBONUS = libft_bonus.a

RM = rm -f

CC = GCC

CFLAGS = -Wall -Wextra -Werror

%.c: %.o
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus: ${OBJSBONUS} ${OBJS}
		ar rc ${NAME} ${OBJS} ${OBJSBONUS}

all: ${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
		${RM} ${NAME}
		${RM} ${NAMEBONUS}

re:		fclean all

.PHONY: all clean fclean re