# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 16:22:16 by ana-pper          #+#    #+#              #
#    Updated: 2023/11/01 15:05:11 by ana-pper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isascii.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c \
ft_isdigit.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
ft_atoi.c ft_isprint.c ft_memset.c ft_strdup.c ft_strncmp.c \
ft_bzero.c ft_itoa.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
ft_calloc.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_isalnum.c \
ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_isalpha.c \
ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c

OBJECTS = $(SRCS:.c=.o)
BONUS_OBJECTS = $(BONUS_SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

bonus: $(BONUS_OBJECTS)
	ar rc $(NAME) $(BONUS_OBJECTS)

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
