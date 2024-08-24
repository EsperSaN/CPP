# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 21:05:54 by pruenrua          #+#    #+#              #
#    Updated: 2024/06/29 11:26:55 by pruenrua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -MP

CPP_FILE = 	Animal.cpp \
			Brain.cpp\
			Cat.cpp \
			Dog.cpp \
			main.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp 

HPP_FILE = 	Animal.hpp \
			Brain.hpp\
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp \

OBJ = $(CPP_FILE:.cpp=.o)

DEPS = $(OBJ:.o=.d)

# %.o: %.cpp $(HPP_FILE)
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ) $(DEPS)

fclean : clean
	rm -f $(NAME)

re : fclean all

-include $(DEPS)

.PHONY : all clean fclean re 