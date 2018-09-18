# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snikitin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 14:18:32 by snikitin          #+#    #+#              #
#    Updated: 2018/09/18 17:32:56 by snikitin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := avm

SRC_DIR := ./src/
OBJ_DIR := ./obj/
INC_DIR := ./inc/

SRC :=	main.cpp\
        OperandCreator.class.cpp\

OBJ = $(addprefix $(OBJ_DIR), $(notdir $(SRC:.cpp=.o)))

INC = $(INC_DIR)IOperand.class.hpp\
	  $(INC_DIR)OperandCreator.class.hpp\

CC_FLAGS := -pedantic -Wall -Wextra -Werror #-std=c++98 
HEADER_FLAGS := -I $(INC_DIR)

CC := clang++

all: $(NAME)

$(NAME): $(OBJ) $(INC) Makefile
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(INC)
	$(CC) -c $< -o $@ $(CC_FLAGS) $(HEADER_FLAGS)

$(OBJ_DIR)%.o: $(SRC_DIR)/*/%.cpp $(INC)
	$(CC) -c $< -o $@ $(CC_FLAGS) $(HEADER_FLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

re: fclean all

vpath %.c $(SRC_DIR)
.PHONY: all clean fclean re
