##
## EPITECH PROJECT, 2019
## navy
## File description:
## navy Makefile
##

MAIN	=	src/main.c

SRC	=	src/init.c	\
		src/errors.c	\
		src/communication.c	\
		src/init_game.c

TESTS	=	tests/navy_tests.c

OBJ	=	$(MAIN:.c=.o) $(SRC:.c=.o)

OBJ_TESTS =	$(SRC:.c=.o) $(TESTS:.c=.o)

NAME	=	navy

CC = gcc

CFLAGS	=	-W -Wall -I./include -L./lib/ -lmy

CFLAGS_TESTS	=	--coverage -lcriterion

CFLAGS_DEBUG = -g3

all:	lib-make compile

debug:	lib-make compile_debug

compile:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

compile_debug:	CFLAGS += $(CFLAGS_DEBUG)

compile_debug:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

lib-make:
	$(MAKE) -C lib/my/

unit_tests:	$(OBJ_TESTS)
	$(CC) -o $@ $^ $(CFLAGS) $(CFLAGS_TESTS)
	./$@

tests_run:	CFLAGS += $(CFLAGS_TESTS)

tests_run:	lib-make unit_tests

clean:
	$(RM) -f $(OBJ)
	$(RM) -f *.gcno
	$(RM) -f *.gcda
	$(RM) -f tests/*.gcno
	$(RM) -f tests/*.gcda
	$(RM) -f tests/*.o
	$(RM) -f lib/libmy.a
	$(RM) -f unit_tests
	$(MAKE) clean -C lib/my/

fclean:	clean
	$(RM) -f $(NAME)

re:	fclean all
