# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 21:05:54 by pruenrua          #+#    #+#              #
#    Updated: 2024/06/28 19:36:53 by pruenrua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

CPP_FILE = ClapTrap.cpp main.cpp

HPP_FILE = ClapTrap.hpp

OBJ = $(CPP_FILE:.cpp=.o)

%.o: %.cpp $(HPP_FILE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re 