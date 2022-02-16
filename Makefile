##
## EPITECH PROJECT, 2022
## olympe-lib
## File description:
## Makefile
##

SRC =   src/ctype/oisalnum.c \
		src/ctype/oisalpha.c \
		src/ctype/oisascii.c \
		src/ctype/oisdigit.c \
		src/ctype/oislower.c \
		src/ctype/oisprintable.c \
		src/ctype/oissign.c \
		src/ctype/oisspace.c \
		src/ctype/oisupper.c \
		src/ctype/otolower.c \
		src/ctype/otoupper.c \
		src/mem/ocalloc.c \
		src/mem/orealloc.c \
		src/string/oatoi.c \
		src/string/omemcpy.c \
		src/string/omemset.c \
		src/string/ostrcat.c \
		src/string/ostrcmp.c \
		src/string/ostrcpy.c \
		src/string/ostrdup.c \
		src/string/ostrlen.c \
		src/string/ostrrev.c \
		src/write/oputchar.c \
		src/write/oputnbr.c \
		src/write/oputstr.c \
		src/write/owrite.c \
		src/array/oarrstrlen.c \
		src/array/ostr_to_array.c \
		src/printf/print_functions/oprintnbr.c \
		src/printf/print_functions/oprintstr.c \
		src/printf/oprintf.c

OBJ = $(SRC:.c=.o)

NAME = libolympe.a

CFLAGS += -Wall -Wextra -Werror -W -Iinclude

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ) \
	&& $(ECHO) $(BOLD) $(GREEN)"► OLYMPE-LIB BUILD SUCCESS !"$(DEFAULT) \
	|| ($(ECHO) $(BOLD) $(RED)"► OLYMPE-LIB BUILD FAILED"$(DEFAULT) && exit 1)

clean:
	@rm -f $(OBJ)
	@rm -f *~

fclean: clean
	@rm -f $(NAME)
	@rm -f ../$(NAME)

re: fclean all

%.o:	%.c
	@gcc -c -o $@ $^ $(CFLAGS) && $(ECHO) -n $(BOLD) $(GREEN)"  [OK] " \
	$(WHITE) || $(ECHO) -n $(BOLD) $(RED)"  [KO] "$(WHITE) && $(ECHO) \
	$(BOLD) $< | rev | cut -d'/' -f 1 | rev && $(ECHO) -n $(DEFAULT)

.PHONY: all clean fclean re

ECHO       =       /bin/echo -e
DEFAULT    =       "\033[00m"

BOLD       =       "\e[1m"
RED        =       "\e[31m"
GREEN      =       "\e[32m"
WHITE      =       "\e[1;37m"
