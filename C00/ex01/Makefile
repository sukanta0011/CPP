SRCS = main.cpp utils.cpp contact.cpp phonebook.cpp
FLAGS = -Wall -Wextra -Werror
CC = c++
OBJS = $(SRCS:.cpp=.o)
NAME = yourphonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

output: all
	./$(NAME)

.PHONY: all clean fclean output