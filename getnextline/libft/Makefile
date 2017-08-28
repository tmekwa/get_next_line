# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 12:35:10 by tmekwa            #+#    #+#              #
#    Updated: 2017/06/24 21:04:18 by tmekwa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
		ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c\
		ft_memchr.c ft_strncpy.c ft_strcat.c ft_strncat.c\
		ft_strchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c\
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strclr.c ft_strequ.c\
		ft_strnequ.c ft_putstr.c ft_strdel.c ft_memdel.c ft_strtrim.c\
		ft_strnew.c ft_strsub.c ft_strjoin.c

JAY = 	$(SRC:%.c=%.o)

all: 	$(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra -c $(SRC) 
		ar rc $(NAME) $(JAY)
		ranlib $(NAME)

clean: 
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
