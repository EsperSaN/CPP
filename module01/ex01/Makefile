# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruenrua <pruenrua@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 21:05:54 by pruenrua          #+#    #+#              #
#    Updated: 2024/05/03 18:41:47 by pruenrua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

CPP_FILE = Zombie.cpp zombieHorde.cpp main.cpp

HPP_FILE = Zombie.hpp

OBJ = $(CPP_FILE:.cpp=.o)

%.o: %.cpp $(HPP_FILE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(CPP_FILE) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re 