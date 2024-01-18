NAME = Zombie
CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $^ -o $@

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
