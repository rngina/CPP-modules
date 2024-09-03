BIN = bin
NAME = fixed
CC = c++
CFLAG = -Wall -Werror -Wextra -std=c++98
SRC = src/main.cpp src/Fixed.cpp
OBJ = $(SRC:src/%cpp=$(BIN)/%o)
INCS = ./includes
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