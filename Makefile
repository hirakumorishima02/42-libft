SRCS = main.c ft_atoi.c ft_isalpha.c ft_memccpy.c ft_memmove.c \
ft_strlcat.c ft_strnstr.c ft_bzero.c ft_isascii.c ft_memchr.c \
ft_memset.c ft_strlcpy.c ft_strrchr.c ft_calloc.c ft_isdigit.c \
ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c ft_isalnum.c \
ft_isprint.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c

OBJS = ${SRCS:.c=.o}

FLAG = -Wall -Wextra -Werror

NAME = libft.a

%.o: %.c
		gcc ${FLAG} -I includes -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f libft.a

re:		fclean all

.PHONY: all, clean, fclean, re