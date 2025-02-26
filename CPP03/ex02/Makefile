NAME = exec

CC = c++

CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

OBJECTS = ../objects

SRC = ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		main.cpp \

OBJ = $(addprefix $(OBJECTS)/, $(SRC:.cpp=.o))

HDR = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJECTS)/%.o: %.cpp $(HDR)
	@mkdir -p $(OBJECTS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

