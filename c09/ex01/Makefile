NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HDR = includes/b.h

SRC = $(wildcard srcs/*.c)

DST = ${SRC:.c=.o}

OPT = -c -I includes -o

all : ${NAME}

${NAME} : ${DST}
	ar rcs $@ $^

%.o :%.c ${HDR}
	${CC} ${CFLAGS} ${OPT} $@ $<

clean :
	rm -rf ${DST}

fclean : clean
	rm -rf ${NAME}

re : fclean all
