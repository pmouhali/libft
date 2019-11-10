#include "libft.h"

int		main(void)
{
	char *s;

ft_putendl_fd("If the specified index is greater than the string length and size is  ok", 1);
	s = ft_substr("abcdefghijklmnop", 400, 10);
	ft_putendl_fd("empty string ?", 1);
	ft_putendl_fd(s, 1);
	free(s);
/*
ft_putendl("If the string is longer than specified substring length and correct index");
	s = ft_substr("abcdefghijklmnop", 3, 10);
	ft_putendl("defghijklm");
	ft_putendl(s);
	free(s);
ft_putendl("If the string is shorter than specified substring length and correct index");
	s = ft_substr("abcdefg", 3, 10);
	ft_putendl("defg");
	ft_putendl(s);
	free(s);
ft_putendl("If the srtring is shorter than spec substr length and last index");
	s = ft_substr("abcdef", 5, 10);
	ft_putendl("f");
	ft_putendl(s);
	free(s);
ft_putendl("If the string is shorter than spec substr length and index is null char");
	s = ft_substr("abcdef", 6, 10);
	ft_putendl("");
	ft_putendl(s);
	free(s);
ft_putendl("If the string is empty and index is null char");
	s = ft_substr("", 0, 10);
	ft_putendl("");
	ft_putendl(s);
	free(s);
ft_putendl("If the substring length is zero, string and index correct");
	s = ft_substr("abcdefghijklmnop", 3, 0);
	ft_putendl("");
	ft_putendl(s);
	free(s);
*/
}

/* Be careful : do not allocate total lenght is str is too short ! */
