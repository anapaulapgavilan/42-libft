# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 16:22:16 by ana-pper          #+#    #+#              #
#    Updated: 2023/10/04 10:11:51 by ana-pper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -c

INCLUDE = libft.h

FLAGS = -Wall -Wextra -Werror

AR = ar rc

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcat.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRCS:.c=.o)

# BONUSSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

# BONUSOBJ = $(BONUSSRCS:.c=.o)

all:	$(NAME)

$(NAME):

	$(CC) $(FLAGS) $(SRCS)

	$(AR) $(NAME) $(OBJ)

	ranlib	$(NAME)


# bonus:
# 	$(CC) $(FLAGS) $(BONUSSRCS)

# 	$(AR) $(NAME) $(BONUSOBJ)

# 	ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJ)

# $(BONUSOBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re