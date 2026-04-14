# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 17:51:25 by kyoussou          #+#    #+#              #
#    Updated: 2026/01/21 16:52:08 by kyoussou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CPP = c++
CFLAGS = -Wall -Werror -Wextra -Iincludes -std=c++98

FILES = main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp \

SRC = $(addprefix sources/, $(FILES))

OBJ = $(addprefix obj/, $(patsubst %.cpp, %.o, $(FILES)))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o: sources/%.cpp
	@mkdir -p $(dir $(NAME))
	@mkdir -p $(dir $(OBJ))
	$(CPP) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf obj

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
