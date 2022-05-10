# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvermeer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/26 17:34:56 by jvermeer          #+#    #+#              #
#    Updated: 2020/12/29 11:52:54 by jvermeer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
	   ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c\
	   ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c\
	   ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
	   ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
	   ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_strmapi.c\
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
		ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(BONUS:.c=.o)

CFLAGS =-c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_BONUS)


fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: fclean
	gcc $(CFLAGS) $(SRCS) $(BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
	ranlib $(NAME)

