NAME		= libft.a

SRCS		= ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			  ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c \
			  ft_strncmp.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c \
			  ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_memcmp.c ft_calloc.c \
			  ft_atoi.c ft_memmove.c ft_strdup.c ft_substr.c ft_strjoin.c \
			  ft_strtrim.c

HEADER		= libft.h

OBJS		= ${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

all: ${NAME}

.c.o: ${HEADER} Makefile
	cc ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} 
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

##não esqueca de apagar a uva
uva:
	cc ${CFLAGS} main.c ${NAME} -lbsd &&clear && ./a.out

.PHONY: all clean fclean re