OBJ = obj
NAME = diamondtrap
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = src/main.cpp src/ClapTrap.cpp src/FragTrap.cpp src/DiamondTrap.cpp
OBJECT_FILES = $(SRC:src/%cpp=$(OBJ)/%o)
INCS = ./includes

all: $(NAME)

$(OBJ)/%.o: src/%.cpp
	$(CC) -c $< $(FLAGS) -I $(INCS) -o $@

$(NAME): $(OBJ) $(OBJECT_FILES)
	$(CC) $(OBJECT_FILES) -o $(NAME)

$(OBJ):
	mkdir -p $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re