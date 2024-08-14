BIN = bin
NAME = phonebook
CC = g++
CFLAG = -Wall -Werror -Wextra -std=c++98
SRC = Account.cpp tests.cpp
OBJ = $(SRC:%cpp=$(BIN)/%o)
INCS = Account.hpp
IFLAGS = -I $(INCS)
RM = rm -rf

all: $(NAME)

$(BIN)/%.o: src/%.cpp
	$(CC) -c $< $(CFLAG) $(IFLAGS) -o $@

$(NAME): $(BIN) $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(BIN):
	mkdir -p $(BIN)

clean:
	$(RM) $(BIN)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re