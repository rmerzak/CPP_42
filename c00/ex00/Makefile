NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILE = ./megaphone.cpp

OBJ = $(FILE:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean clean

.PHONEY: all clean fclean re