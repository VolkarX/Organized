#
## EPITECH PROJECT, 2025
## organized
## File description:
## Makefile organized
#

SRC = src/*.c src/utils/*.c src/components/*.c
NAME = organized
all	:	$(NAME)

$(NAME):
	clang -o $(NAME) $(SRC) -Lsrc/lib -lshell

clean:
	rm -f *.o
	rm -f *~
	rm -f *Zone.Identifier
	rm -f *.pch
	rm -f src/utils/*~
	rm -f src/*~
	rm -f include/*.pch

fclean: clean
	rm -f $(NAME)

re: fclean all
