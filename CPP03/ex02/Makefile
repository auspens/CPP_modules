NAME = exec

CC = c++

CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC = ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		main.cpp \

OBJ = $(SRC:.cpp=.o)

HDR = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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

