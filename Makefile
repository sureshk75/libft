# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 17:31:06 by schetty           #+#    #+#              #
#    Updated: 2021/11/11 18:24:22 by schetty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

AR			=	ar rc

RL			=	ranlib

SRC			=	ft_atoi.c			ft_bzero.c			ft_calloc.c		\
				ft_intlen_base.c	ft_isalnum.c		ft_isalpha.c	\
				ft_isascii.c		ft_ischar.c			ft_isdigit.c	\
				ft_isprint.c		ft_isset.c			ft_isspace.c	\
				ft_itoa.c			ft_memccpy.c		ft_memchr.c		\
				ft_memcmp.c			ft_memcpy.c			ft_memmove.c	\
				ft_memset.c			ft_putchar_fd.c		ft_putendl_fd.c	\
				ft_putnbr_fd.c		ft_putstr_fd.c		ft_split.c		\
				ft_strchr.c			ft_strdup.c			ft_striteri.c	\
				ft_strjoin.c		ft_strlcat.c		ft_strlcpy.c	\
				ft_strlen.c			ft_strmapi.c		ft_strncmp.c	\
				ft_strnstr.c		ft_strrchr.c		ft_strtrim.c	\
				ft_substr.c			ft_tolower.c		ft_toupper.c

B_SRC		=	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c	\
				ft_lstdelone.c		ft_lstiter.c		ft_lstlast.c	\
				ft_lstmap.c			ft_lstnew.c			ft_lstsize.c

OBJ			= 	$(SRC:.c=.o)

B_OBJ		=	$(B_SRC:.c=.o)

all			:	$(NAME)

$(NAME)		: 	$(OBJ)
				@ echo Generating Standard $(NAME)..
				@ $(AR) $(NAME) $(OBJ)
				@ $(RL) $(NAME)

.c.o		:
				@ $(CC) $(CFLAGS) -c $< -o $@

clean		:
				@ echo Removing Object Files..
				@ $(RM) $(OBJ) $(B_OBJ)

fclean		:	clean
				@ echo Removing $(NAME)..
				@ $(RM) $(NAME)

re			:	fclean all

bonus		:	$(OBJ) $(B_OBJ)
				@ echo Generating Bonus $(NAME)..
				@ $(AR) $(NAME) $(OBJ) $(B_OBJ)
				@ $(RL) $(NAME)

.PHONY		:	all clean fclean re
