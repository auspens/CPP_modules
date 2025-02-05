NAME = exec

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp \
		main.cpp \

OBJ = $(SRC:.cpp=.o)

HDR = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

