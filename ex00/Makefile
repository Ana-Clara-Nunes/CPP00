# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/13 14:48:13 by anunes-o          #+#    #+#              #
#    Updated: 2026/11/17 12:55:04 by anunes-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone
CXX  := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC  := megaphone.cpp

OBJS := $(SRC:.cpp=.o)

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m✅ megaphone created sucessfully!\033[0m"
	
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "\033[1;33mObject removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;31mBinary removed.\033[0m"

re: fclean all

.PHONY: all clean fclean re