#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_list
{
	void			*content;
	struct s_list 	*next;
}				t_list;

int		ft_atoi(const char *nptr);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, unsigned int nb);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strstr(const char *haystack, const char *needle);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);		
int		ft_tolower(int c);		
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putnbr(int n);
void    ft_putnbr_fd(int n, int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
int		ft_index(char const *s, char c);
char	**ft_split(char const *s, char c);
void    ft_free_str_array(char **ar);
void    ft_putstr_array(char **ar);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putstr_color(char const *s, char const *color);

# define ANSI_RESET_COLOR "\x1b[0m"
# define ANSI_BLACK "\x1b[30m"
# define ANSI_RED "\x1b[31m"
# define ANSI_GREEN "\x1b[32m"
# define ANSI_YELLOW "\x1b[33m"
# define ANSI_BLUE "\x1b[34m"
# define ANSI_MAGENTA "\x1b[35m"
# define ANSI_CYAN "\x1b[36m"
# define ANSI_WHITE "\x1b[37m"

#endif
