##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile printf
##

ECHO = /bin/echo -e
DEFAULT = "\033[00m"
BOLD = "\e[1m"
RED = "\e[31m"
GREEN = "\e[32m"
LIGHT_BLUE = "\e[94m"
WHITE = "\e[1;37m"

SRC	=	src/fs_open_file.c	\
		src/main.c	\
		src/my_getnbr.c	\
		src/my_put_nbr.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\
		src/my_str_to_word_array.c	\
		src/my_strcpy_m.c	\
		src/my_strcpy.c	\
		src/my_strdup.c	\
		src/check_files.c	\
		src/generator.c	\
		src/token.c	\
		src/transformation.c	\
		src/bsq_second_case.c	\
		src/bsq.c	\
		src/my_strlen.c	\

OBJ	= $(SRC:.c=.o)

NAME	= bsq

LDFLAGS = -I include

CFLAGS	= -I include -Wall -Wextra

all:	$(NAME)

$(NAME) : $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_CRIT)

fclean:	clean
		rm -f $(NAME)

debug:	CFLAGS += -g
debug:	re

re:	fclean all

%.o:	%.c
	@$(CC) -c -o $@ $^ $(CFLAGS) && $(ECHO) -n $(BOLD) $(GREEN)" [OK] " \
	$(WHITE) || $(ECHO) -n $(BOLD) $(RED)" [KO] "$(WHITE) && $(ECHO) \
	$(BOLD) $< | rev | cut -d/ -f 1 | rev && $(ECHO) -n $(DEFAULT)
