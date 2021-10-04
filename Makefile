# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 17:31:06 by schetty           #+#    #+#              #
#    Updated: 2021/10/01 23:43:34 by schetty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Linker
CC			:=	gcc

# Target Binary Program
NAME		:=	libft.a

# Directories
OBJDIR		:= obj/

# Flags, Libraries and Includes
CFLAGS		:=	-Wall -Wextra -Werror

# Functions
ARCHIVE		:=	ar rc
INDEXER		:=	ranlib
DELETE		:=	rm -f
CREATEDIR	:=	mkdir -p
DELETEDIR	:=	rm -Rf
ifeq ($(shell uname -s),Darwin)
	ECHO	:=	echo
else
	ECHO	:=	echo -e
endif

# Colors
REG			:=	'\033[0;37m'
GRN			:=	'\033[1;32m'
RED			:=	'\033[1;31m'
YLW			:=	'\033[1;33m'
CLR			:=	'\033[0m'

# Source, Objects and Resources
SOURCES		:=	ft_abs.c			ft_atoi.c			ft_bzero.c			\
				ft_calloc.c			ft_intlen.c			ft_isalnum.c		\
				ft_isalpha.c		ft_isascii.c		ft_ischar.c			\
				ft_isdigit.c		ft_isprint.c		ft_isset.c			\
				ft_isspace.c		ft_itoa.c			ft_lstadd_back.c	\
				ft_lstadd_front.c	ft_lstclear.c		ft_lstdelone.c		\
				ft_lstiter.c		ft_lstlast.c		ft_lstmap.c			\
				ft_lstnew.c			ft_lstsize.c		ft_memccpy.c		\
				ft_memchr.c			ft_memcmp.c			ft_memcpy.c			\
				ft_memmove.c		ft_memset.c			ft_intlen_base.c	\
				ft_putchar_fd.c		ft_putendl_fd.c		ft_putnbr_fd.c		\
				ft_putstr_fd.c		ft_split.c			ft_strchr.c			\
				ft_strdup.c			ft_strjoin.c		ft_strlcat.c		\
				ft_strlcpy.c		ft_strlen.c			ft_strmapi.c		\
				ft_strncmp.c		ft_strnstr.c		ft_strrchr.c		\
				ft_strtrim.c		ft_substr.c			ft_tolower.c		\
				ft_toupper.c
OBJECTS		:=	$(patsubst %,$(OBJDIR)%,$(SOURCES:.c=.o))

# Defauilt Make
all			:	outdir $(NAME)
				@ $(ECHO) $(GRN)$(NAME) $(REG)Generated Successfully!$(CLR)

outdir		:
				@ $(CREATEDIR) $(OBJDIR)

# Link
$(NAME)		:	$(OBJECTS)
				@ $(ARCHIVE) $(NAME) $(OBJECTS)
				@ $(INDEXER) $(NAME)

# Compile
$(OBJDIR)%.o:	%.c
				@ $(CC) $(CFLAGS) -c $< -o $@

# Clean Objects
clean		:
ifneq ($(wildcard $(OBJDIR)*.o),)
	@ $(DELETE) $(OBJECTS)
	@ $(DELETEDIR) $(OBJDIR)
	@ $(ECHO) $(YLW)$(basename $(NAME)) $(REG)Object Files Deleted!$(CLR)
else
	@ $(ECHO) $(REG)No $(RED)$(basename $(NAME)) $(REG)Object Files To Remove..$(CLR)
endif

# Full Clean
fclean		:
ifneq ($(wildcard $(NAME)),)
	@ $(DELETE) $(NAME)
	@ $(DELETE) $(OBJECTS)
	@ $(DELETEDIR) $(OBJDIR)
	@ $(ECHO) $(YLW)$(basename $(NAME)) $(REG)Binary \& Object Files Deleted!$(CLR)
else
	@ $(ECHO) $(REG)No $(RED)$(basename $(NAME)) $(REG)Binary Or Object Files To Remove..$(CLR)
endif

# Recompile
re			:	fclean all

# Non-File Targets
.PHONY		:	all clean fclean re
