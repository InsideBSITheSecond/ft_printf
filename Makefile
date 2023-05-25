# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 14:22:16 by llegrand          #+#    #+#              #
#    Updated: 2023/04/20 20:26:29 by llegrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CCARGS := -Wall -Werror -Wextra

AR := ar
ARARGS := -crs

SRCS := srcs/ft_printf.c srcs/ft_putstr.c srcs/ft_putptr.c srcs/ft_putnbr.c srcs/ft_puthex.c

OBJS := $(SRCS:.c=.o)

NAME := libftprintf.a

$(NAME) : libft.a $(OBJS)
	cp libft.a libftprintf.a
	$(AR) $(ARARGS) $(NAME) $(OBJS)

libft.a :
	cd libft && $(MAKE) bonus
	cp libft/libft.a libft.a

clean :
	rm -f $(OBJS) $(BOBJS)
	cd libft && $(MAKE) clean

fclean : clean
	rm -f $(NAME) libft.a
	cd libft && $(MAKE) fclean

all : $(NAME)

re : fclean all

test : $(NAME) main.c
	@gcc -Iincludes -L. -lftprintf -g $(SRCS) main.c -o a.out
	@./a.out ${arg}

reset :
	reset

catgirl :
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣠⣤⣤⣶⣤⣤"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⣤⣤⣄⣀⣀⣀⣀⣀⣀⣠⣴⠶⠶⠟⣛⣛⣛⣛⣛⣛⣻⠶⢶⣦⣤⣤⣶⣶⣾⣿⣿⢿⡿⣿⡻⢶⣣⡽"
	@echo "⠀⠀⠀⠀⠀⠀⠀⢀⣾⣻⣭⡵⣭⣳⣽⢿⣿⡿⣟⡿⣭⢷⡶⣛⡿⣻⣭⣻⣭⣯⡽⣹⡞⣽⢯⡞⣽⣫⢟⣻⢿⣷⣿⣻⣽⣳⢽⣫⢷⣹"
	@echo "⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⡼⣳⢳⣧⣿⣻⡭⣟⡵⣯⠽⠞⠃⠉⢉⢀⣀⣀⠀⠀⠀⠉⠉⠓⠻⠞⣧⢯⢯⡽⣞⢮⢯⣟⡷⣽⡞⣧⢟⣧"
	@echo "⠀⠀⠀⠀⠀⠀⢠⣿⣿⣽⣾⡽⢯⡽⣎⡷⡽⢚⣩⡴⢖⣚⡛⣹⡩⠯⠉⠉⠛⠙⠛⠛⠒⠶⠤⣄⡀⠉⠓⢿⡼⣫⢷⣹⢾⣹⡽⣞⡽⣺"
	@echo "⠀⠀⠀⠀⠀⠀⢸⣿⡿⣾⡳⣽⢫⢷⠝⣡⠞⠋⠀⠀⠀⣠⡟⠁⠀⠀⠀⠀⠀⢰⠀⠀⠀⠀⠀⠀⠉⠙⠦⣄⡉⠻⣞⢧⣯⢳⡽⣎⡷⢯"
	@echo "⠀⠀⠀⠀⠀⠀⢸⣿⡿⡷⣝⣧⡿⣡⠞⠁⠀⠀⠀⠀⣜⡟⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢦⡈⢻⡼⣏⢷⡻⣼⢯"
	@echo "⠀⠀⠀⠀⠀⠀⣾⣿⣹⢟⣵⣾⠞⠁⠀⠀⠀⠀⠀⣜⡿⠀⠀⠀⠀⠀⠀⠀⠀⡸⠀⠀⠀⠀⠀⢠⠀⠀⠀⠀⠀⠀⠙⢦⡙⣞⢯⣳⢯⣞"
	@echo "⠀⠀⠀⠀⠀⢰⣿⡏⣯⣟⣾⠋⠀⠀⠀⠀⠀⠀⡸⣽⡇⢀⠇⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠘⡄⠀⠀⠀⠀⠀⠀⠈⢳⡌⢯⣗⢯⣞"
	@echo "⠀⠀⠀⠀⠀⢼⡿⢸⣧⡿⡁⠀⠀⠀⠀⠀⠀⣰⣿⣹⣧⣸⠀⠀⠀⠀⠀⠀⠀⣧⣠⣄⣀⣀⡀⠀⢻⡀⠀⠀⠀⠀⠀⠀⢀⢻⡜⣞⡯⣞"
	@echo "⠀⠀⠀⠀⠀⣾⣧⡿⢋⡺⠁⠀⠀⠀⣠⠴⣻⠟⢱⢹⡇⢻⠀⠀⠀⠀⠀⠀⠀⣿⡄⠀⠀⠈⠉⠙⢺⣇⡀⠀⠀⠀⠀⠀⠈⡆⢻⣼⣳⢯"
	@echo "⠀⠀⠀⢤⣼⣟⣍⣦⠟⠁⠀⠀⠀⠐⣡⡾⠋⠀⠘⡌⣷⢻⠀⠀⠀⠀⠀⠀⠀⢸⣷⡀⠀⠀⠀⠀⢸⣷⠈⠢⠀⠀⠀⠀⠀⢹⠸⣷⢟⡾"
	@echo "⠀⠀⠀⢠⣿⢯⣿⠋⠀⠀⠀⠀⢠⡞⠃⠀⠀⢀⠀⡘⠼⣿⡷⣄⡀⠀⠀⠀⠀⠈⣧⠻⣦⠀⠀⠀⡸⢾⠀⠀⠀⠀⠀⠀⠀⠸⡀⢽⡾⣿"
	@echo "⠀⠀⠀⣾⢯⣿⠃⠀⢀⠀⠠⠀⣼⢦⣠⣴⣾⣭⣯⣭⡇⠈⢻⣌⡛⠳⠶⢤⣄⣀⣹⣟⣚⣻⣦⡤⣃⣿⡄⠀⠀⠀⠀⠀⠀⠀⡇⡝⣷⣿"
	@echo "⠀⠀⣸⣯⣿⡏⠀⣠⡇⠀⠄⢳⣿⣿⣿⣿⣿⠿⠿⠿⠷⠀⠀⠀⠈⠉⠉⠒⠒⠣⣿⣿⣿⣿⣿⣿⣿⣿⣄⣠⡆⠀⠀⢀⠀⠠⡇⢻⣼⣿"
	@echo "⠀⣰⡿⣼⣿⣧⢫⣱⠃⠠⠀⢀⣿⢋⠍⠤⢂⠦⠂⡀⠄⠀⠀⠀⠀⠀⠀⠀⠀⣀⠠⡀⠤⡉⡉⢛⢻⡿⢿⠋⡆⠀⠀⠄⡀⢸⠁⡈⣿⣿"
	@echo "⢰⣿⡳⣿⣽⢿⣷⡞⢰⠀⠁⣾⡇⡊⠤⠑⠂⠠⠁⡀⠄⠲⢧⣀⡠⠶⠤⠶⠞⠋⢀⠐⡐⠠⠉⢆⣾⠃⢀⡜⠇⠀⢈⠀⡀⡾⠀⠄⣿⣿"
	@echo "⣿⡿⣱⣿⣯⣿⡿⣁⢾⠀⢁⢻⣧⡀⠐⠈⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠠⣁⣬⣾⡯⡚⢥⠻⠀⢀⢂⠀⣰⠇⢈⠀⣿⣿"
	@echo "⣿⣷⡝⣿⣿⣷⣦⡷⣿⠀⠠⢸⣙⢻⣦⣄⣀⣀⣂⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡠⢤⣚⣴⠟⣜⠩⡖⠁⡀⢂⡼⣰⢿⡀⢀⣼⣿⣿"
	@echo "⠈⢻⣿⣼⣯⣿⣽⣿⡿⣧⣀⠈⢮⠹⣟⠛⣛⢛⣛⣛⡛⠻⠿⣷⡿⣿⣿⣿⡿⡿⣷⢷⣾⣽⣷⣾⣶⣭⣴⣶⢾⠿⣛⢭⣿⣷⣿⡿⣟⣾"
	@echo "⠀⠀⢈⣿⡿⢛⣥⣿⢃⣼⠿⣷⠾⣷⢿⡿⣝⡯⣞⡽⣛⣷⣱⣿⣿⣿⢳⢧⣻⡵⣏⡿⡼⢶⢯⣝⡻⢿⣿⣿⣦⣷⣾⣻⣾⢿⣽⣻⢿⣽"
	@echo "⢀⣴⡿⢋⣴⣿⣿⡏⣾⣝⣻⡼⣻⡝⣮⢟⡾⣱⢯⣳⢟⣼⣿⣿⢯⡷⣏⣟⡶⣏⡷⣽⣹⣛⣮⢏⣟⠷⣮⡙⢿⣟⡿⣿⣯⣿⢯⣿⢯⣿"
	@echo "⣿⠟⣰⣿⢫⣿⣾⣗⢯⡞⣵⣏⡷⣽⢫⡾⡽⣭⢷⣯⡿⣻⣿⣟⣿⢿⣼⣣⢿⡜⣷⣣⢯⣳⠽⡾⣭⢟⡾⣹⢷⣍⠻⣷⣟⡿⣿⣯⣿⣻"
	@echo "⢃⡾⢿⣜⢯⣿⢾⣿⣣⣟⣳⢾⣱⢯⣏⣷⣻⣾⣟⠟⣽⢯⣿⣿⣯⡿⣷⡽⣺⠽⣖⣯⢳⣏⠿⣵⣛⡾⣹⡽⣎⣟⡷⣜⢻⣿⣽⣻⡾⣿"
	@echo "⣸⢻⣝⡮⢯⣿⢿⣽⣷⢯⣾⢷⣻⣾⢯⣿⣽⠗⣍⣾⢟⢺⣿⣞⣿⣽⣟⣿⢯⣛⡷⣚⣯⢞⣻⡵⣫⣞⢷⣹⡽⢮⣝⢯⣧⡹⣷⡿⣽⣿"

.PHONY : clean fclean all re 
