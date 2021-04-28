# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 09:51:21 by hmorishi          #+#    #+#              #
#    Updated: 2021/04/27 10:51:55 by hmorishi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_isalpha.c ft_memccpy.c ft_memmove.c \
		ft_strlcat.c ft_strnstr.c ft_bzero.c ft_isascii.c ft_memchr.c \
		ft_memset.c ft_strlcpy.c ft_strrchr.c ft_calloc.c ft_isdigit.c \
		ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c ft_isalnum.c \
		ft_isprint.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c \
		ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(BONUS:.c=.o)

GCC = gcc -Wall -Wextra -Werror

INC = -I includes

NAME = libft.a

RM = rm -f

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
		ranlib $(NAME)

%.o: %.c
		$(GCC) $(INC) -c $< -o $(<:.c=.o)

all:	$(NAME)

bonus: $(NAME) $(OBJSBONUS)
		ar rcs $(NAME) $(OBJS) $(OBJSBONUS)

clean:
		$(RM) $(OBJS) $(OBJSBONUS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re bonus