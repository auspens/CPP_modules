NAME = harl

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = 	Harl.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

HDR = Harl.hpp

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
