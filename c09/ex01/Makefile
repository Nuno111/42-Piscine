NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HDR = includes/ft.h

SRC = $(wildcard srcs/*.c)

DST = ${SRC:.c=.o}

OPT = -c -I includes -o

all : ${NAME}

${NAME} : ${DST}
	ar rcs $@ $^

%.o :%.c ${HDR}
	${CC} ${CFLAGS} ${OPT} $@ $<

clean :
	rm -f ${DST}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
