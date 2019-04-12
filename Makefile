# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/15 11:35:57 by dborysen          #+#    #+#              #
#    Updated: 2019/04/11 16:57:16 by dborysen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

SRCS =  main.cpp Gkrellm.cpp IMonitorDisplay.cpp IMonitorModule.cpp

OBJECT = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

CC = clang++

all: $(NAME)

$(NAME) : $(OBJECT)
	@$(CC) $(FLAGS) -lncurses $(OBJECT) -o $(NAME)

$(OBJECT) : $(SRCS)
	@$(CC) $(FLAGS) -c $(SRCS)
	@echo "\033[37m[Compilation:\033[0m\033[36m $@\033[0m]"

comp:
	$(CC) -g $(FLAGS) $(SRCS)

clean:
	@rm -f $(OBJECT)
	@rm buff Net_buff Processes_buff Disks_buff
	@echo "\033[32m[.o files has been deleted]\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[32m[binary has been deleted]\033[0m"

re: fclean all 