NAME = clubbing

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = Weapon.cpp \
		main.cpp \
		HumanA.cpp \
		HumanB.cpp
OBJ = $(SRC:.cpp=.o)

HDR = Weapon.hpp \
		HumanA.hpp \
		HumanB.hpp

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
