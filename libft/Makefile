# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 14:22:16 by llegrand          #+#    #+#              #
#    Updated: 2023/05/10 17:42:33 by llegrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CCARGS := -Wall -Werror -Wextra

AR := ar
ARARGS := -crs

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strmapi.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_strdup.c ft_split.c ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_atoi.c

BONUS = ft_lstnew_bonus.c ft_lstdelone_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS := $(SRCS:.c=.o)
BOBJS := $(BONUS:.c=.o)

NAME := libft.a

$(NAME) : $(OBJS)
	$(AR) $(ARARGS) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CCARGS) -I ./ -c $< -o ${<:.c=.o}

clean :
	rm -f $(OBJS) $(BOBJS)

fclean : clean
	rm -f $(NAME)

all : $(NAME)

re :	fclean all

bonus : $(OBJS) $(BOBJS)
	$(AR) $(ARARGS) $(NAME) $(OBJS) $(BOBJS)

show :
	reset
	@echo $(SRCS)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(OBJS)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(BONUS)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(BOBJS)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(CC) $(CCARGS) -I./ -o $(<:.c=.o)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(AR) $(ARARGS) $(NAME) $(OBJS)

test :
	gcc ${SRCS} -g -o a.out
	./a.out ${arg}

.PHONY : clean fclean all re 
