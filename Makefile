# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 17:31:06 by schetty           #+#    #+#              #
#    Updated: 2021/12/09 20:35:04 by schetty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Linker
CC			:=	gcc

# Target Binary Program
NAME		:=	libft.a

# Flags, Libraries and Includes
CFLAGS		:=	-Wall -Wextra -Werror

# Functions
ARCHIVE		:=	ar r
INDEXER		:=	ranlib
DELETE		:=	rm -f

SOURCE		:=	ft_atoi.c			ft_bzero.c			ft_calloc.c		\
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
				ft_substr.c			ft_tolower.c		ft_toupper.c	\
				ft_abs.c

BONUS_SOURCE:=	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c	\
				ft_lstdelone.c		ft_lstiter.c		ft_lstlast.c	\
				ft_lstmap.c			ft_lstnew.c			ft_lstsize.c	\
				ft_lstget.c

OBJECT		:= 	$(SOURCE:.c=.o)

BONUS_OBJECT:=	$(BONUS_SOURCE:.c=.o)

# Default Make
all			:	$(NAME)

# Link
$(NAME)		:	$(OBJECT)
				$(INDEXER) $(NAME)

bonus		:	$(BONUS_OBJECT)
				$(INDEXER) $(NAME)

# Compile
%.o			:	%.c
				$(CC) $(CFLAGS) -c $< -o $@
				$(ARCHIVE) $(NAME) $@ $@

# Clean Objects
clean		:
				$(DELETE) $(OBJECT) $(BONUS_OBJECT)

# Full Clean
fclean		:
				$(DELETE) $(NAME)
				$(DELETE) $(OBJECT) $(BONUS_OBJECT)

# Recompile
re			:	fclean all

# Non-File Targets
.PHONY		:	all bonus clean fclean re
