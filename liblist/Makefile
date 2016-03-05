CC   	=	gcc
NAME 	=	liblist.a
SRC  	=	$(wildcard *.c)
OBJ 	= 	$(SRC:%.c=%.o)
RM  	= 	rm -f
CFLAGS 	= 	-W -Wall -ansi -pedantic -L. -I.

$(NAME) :	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
