NAME=	amateria
CC=		g++
FLAGS=	-Wall -Wextra -Werror -g3 -std=c++98

FILES=		main.cpp \
			AMateria.cpp \
			Cure.cpp \
			Ice.cpp \
			Ice.cpp \
			Character.cpp \
			MateriaSource.cpp
OBJ_FOLDER=	obj/
OBJ=		$(FILES:%.cpp=$(OBJ_FOLDER)%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@mkdir -p $(OBJ_FOLDER)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJ_FOLDER)%.o: %.cpp
	@mkdir -p $(OBJ_FOLDER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean