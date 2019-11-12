NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = 		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \


BONUSES = 	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

HEADER = libft.h

OBJS = $(SRCS:.c=.o)
OBJSBONUSES = $(BONUSES:.c=.o)

$(NAME):
		gcc $(FLAGS) -c $(SRCS) -I./ $(HEADER)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all: $(NAME)

bonus: 
		gcc $(FLAGS) -c $(SRCS) $(BONUSES) -I./ $(HEADER)
		ar rc $(NAME) $(OBJS) $(OBJSBONUSES)
		ranlib $(NAME)

clean:
		rm -f $(OBJS) $(OBJSBONUSES)

fclean: clean
		rm -f $(NAME)

re: fclean all


norme:
	norminette $(SRCS) $(BONUSES) $(HEADER)

