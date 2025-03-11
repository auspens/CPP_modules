NAME = convert

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJ_DIR = obj

SRC = src/conversionException.cpp \
		src/madPrinter_printChar.cpp \
		main.cpp \
		src/madPrinter_printInt.cpp \
		src/madPrinter.cpp \
		src/ScalarConverter.cpp \
		src/ScalarConverterTypeHandlers.cpp

OBJ = $(SRC:src/%.cpp=$(OBJ_DIR)/%.o)

HDR = includes/conversionException.hpp \
		includes/ScalarConverter.hpp \
		includes/madPrinter.hpp \

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

