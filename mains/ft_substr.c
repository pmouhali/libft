#include "libft.h"

void	ft_putendl(char *s)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}

int		main(void)
{
	char *s;
	char *e;

ft_putendl_fd("s = jambon, start = -10, len = 5", 1);
	e = ft_strdup("jambon");
	s = ft_substr(e, -10, 5);
	ft_putendl_fd("", 1);
	ft_putendl_fd(s, 1);
	free(s);
	free(e);

ft_putendl_fd("If the specified index is greater than the string length and size is  ok", 1);
	e = ft_strdup("abcdefghijklmnop");
	s = ft_substr(e, 400, 10);
	ft_putendl_fd("", 1);
	ft_putendl_fd(s, 1);
	free(s);
	free(e);

ft_putendl("If the string is longer than specified substring length and correct index");
	e = ft_strdup("abcdefghijklmnop");
	s = ft_substr(e, 3, 10);
	ft_putendl("defghijklm");
	ft_putendl(s);
	free(s);
	free(e);

ft_putendl("If the string is shorter than specified substring length and correct index");
	e = ft_strdup("abcdefg");
	s = ft_substr(e, 3, 10);
	ft_putendl("defg");
	ft_putendl(s);
	free(s);
	free(e);

ft_putendl("If the srtring is shorter than spec substr length and last index");
	e = ft_strdup("abcdef");
	s = ft_substr(e, 5, 10);
	ft_putendl("f");
	ft_putendl(s);
	free(s);
	free(e);

ft_putendl("If the string is shorter than spec substr length and index is null char");
	e = ft_strdup("abcdef");
	s = ft_substr(e, 6, 10);
	ft_putendl("");
	ft_putendl(s);
	free(s);
	free(e);

ft_putendl("If the string is empty and index is null char");
	e = ft_strdup("");
	s = ft_substr(e, 0, 10);
	ft_putendl("");
	ft_putendl(s);
	free(s);
	free(e);

ft_putendl("If the substring length is zero, string and index correct");
	e = ft_strdup("abcdefghijklmnop");
	s = ft_substr(e, 3, 0);
	ft_putendl("");
	ft_putendl(s);
	free(s);
	free(e);
}

/* Be careful : do not allocate total lenght is str is too short ! */
