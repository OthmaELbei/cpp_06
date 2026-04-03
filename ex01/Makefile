
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = Serializer.cpp main.cpp
OPJECT = $(FILES:.cpp=.o)

NAME = Serializer

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp Serializer.hpp 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 