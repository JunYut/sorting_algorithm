# Flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
INCLUDE = ./
OBJ_DIR = ./obj

# Targets, Source Files
HEADER = $(INCLUDE)stack.h
SOURCE = stack.c utils.c
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCE:.c=.o))
LIBRARY = libstack.a

# Rules & Recipes
all : $(LIBRARY)

$(LIBRARY): $(OBJECTS)
	ar rcs $@ $^

$(OBJECTS): $(SOURCE) $(HEADER)
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIBRARY)

re: fclean all

.PHONY: all clean fclean re