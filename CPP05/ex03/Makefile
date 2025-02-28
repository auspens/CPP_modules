NAME = exec

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj

SRC = src/Bureaucrat.cpp \
		src/AForm.cpp \
		main.cpp \
		src/PresidentialPardonForm.cpp \
		src/ShrubberyCreationForm.cpp \
		src/RobotomyRequestForm.cpp \
		src/Intern.cpp

OBJ = $(SRC:src/%.cpp=$(OBJ_DIR)/%.o)

HDR = includes/Bureaucrat.hpp \
		includes/AForm.hpp \
		includes/PresidentialPardonForm.hpp \
		includes/RobotomyRequestForm.hpp \
		includes/ShrubberyCreationForm.hpp \
		includes/Intern.hpp

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

