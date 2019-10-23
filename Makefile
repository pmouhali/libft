NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
		ft_strcat.c \
		ft_strcmp.c \
		ft_strlcat.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strstr.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \

HEADER = libft.h

OBJS = $(SRCS:.c=.o)

$(NAME):
		gcc $(FLAGS) -c $(SRCS) -I./ $(HEADER)
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm $(OBJS)

fclean: clean
		rm $(NAME)

re: all clean
