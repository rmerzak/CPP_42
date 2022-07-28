NAME = phone

CC = c++

FLAGS = -Wall -Wextra -Werror

FILE = main.cpp Contact.cpp PhoneBook.cpp 

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