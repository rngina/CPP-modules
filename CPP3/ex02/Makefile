NAME = fragtrap
SRC = src/main.cpp src/FragTrap.cpp src/ClapTrap.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -I ./includes
OBJ = $(SRC:src/%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

obj/%.o: src/%.cpp
	@mkdir -p obj
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re