NAME = exec

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJ_DIR = obj

SRC = src/Base.cpp \
		src/Generator.cpp \
		src/Identifier.cpp \
		main.cpp \

OBJ = $(SRC:src/%.cpp=$(OBJ_DIR)/%.o)

HDR = includes/A.hpp \
		includes/B.hpp \
		includes/C.hpp \
		includes/Base.hpp \
		includes/Identifier.hpp \
		includes/Generator.hpp

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: src/%.cpp $(HDR) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

