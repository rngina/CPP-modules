BIN = bin
NAME = zombie
CC = c++
CFLAG = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp 
OBJ = $(SRC:%cpp=$(BIN)/%o)
RM = rm -rf

all: $(NAME)

$(BIN)/%.o: %.cpp
	$(CC) -c $< $(CFLAG) -o $@

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