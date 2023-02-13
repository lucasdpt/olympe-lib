##
## EPITECH PROJECT, 2022
## olympe-list-lib
## File description:
## Makefile
##
VERSION = 0.0.1

SRC =   src/olist_data.c \
		src/olist_manage.c \
		src/olist_misc.c

OBJ = $(SRC:.c=.o)

NAME = libolist.a

CFLAGS += -Wall -Wextra -Werror -W -Iinclude

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ) \
	&& $(ECHO) $(BOLD) $(GREEN)"► OLYMPE-LIST-LIB BUILD SUCCESS !"$(DEFAULT) \
	|| ($(ECHO) $(BOLD) $(RED)"► OLYMPE-LIST-LIB BUILD FAILED"$(DEFAULT) && exit 1)
	@$(ECHO) $(BOLD) $(GREEN) "OLYMPE-LIST-LIB -- VERSION:" $(VERSION) $(DEFAULT)

clean:
	@rm -f $(OBJ)
	@rm -f *~

fclean: clean
	@rm -f $(NAME)

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
