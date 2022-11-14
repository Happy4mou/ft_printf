NAME = libftprintf.a
CFILES = ft_printf.c ft_putchar.c ft_putnbrd.c ft_format.c ft_putstr.c  hexalower.c hexaupper.c pta.c\

OBJ = ${CFILES:.c=.o}
FLAGS = -Wall -Werror -Wextra
CC = cc $(FLAGS)
LI = ar -rc

all : ${NAME}

${NAME} : ${OBJ}
	${LI} ${NAME} ${OBJ}

${OBJ} :
	${CC} -c ${CFILES} 

clean :
	${RM} ${OBJ}
fclean : clean 
	${RM} ${NAME}
re : fclean all