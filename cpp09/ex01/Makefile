# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 00:39:21 by mcesar-d          #+#    #+#              #
#    Updated: 2023/07/16 00:05:37 by mcesar-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

# LIBRARY #

# COMPILATION #

CC = c++
FLAGS = -g -std=c++98 -Werror -Wextra -Wall

# DELETE #

RM = rm -rf

# DIRECTORIES #

SRC_DIR = ./

VPATH = $(SRC_DIR)\

# FILES #

FILES =		main RPN

SOURCES =	$(FILES:=.cpp)

# COMPILED_SOURCES #

SRC_PATH =	./
OBJ_PATH =	obj/
SRCS =	${addprefix ${SRC_PATH}, ${SOURCES}}
OBJS =	$(addprefix $(OBJ_PATH), $(SOURCES:.c=.o))

# *************************************************************************** #

# RULES #

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

${OBJ_PATH}%.o:	$(SRC_PATH)%.c
	@mkdir -p obj
	@${CC} ${FLAGS} -c $< -o $@

clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

val: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) "2 3 * 5 +"

run: all
	./$(NAME)

.PHONY: all clean fclean re
