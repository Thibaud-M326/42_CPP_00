CPP = c++
CPPFLAGS = -g3 -Wall -Wextra -Werror -MMD -MP -std=c++98
NAME = theJobOfYourDreams

OBJ_DIR = ./.obj
SRC_DIR = ./

SRC =							\
	$(SRC_DIR)/tests.cpp		\
	$(SRC_DIR)/Account.cpp		\

OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEP = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.d)

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp Makefile
	mkdir -p $(OBJ_DIR)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

-include $(DEP)

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re