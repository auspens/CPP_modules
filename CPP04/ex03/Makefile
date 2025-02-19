NAME = exec

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		main.cpp \
		MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HDR = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp

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

