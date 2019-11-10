#include "get_next_line.h"
#include <string.h>

int		main(void)
{
	char *s;
	char *buf;

	buf = strdup("bad mother");
	ft_putendl_fd("With two random strings :", 1);
	ft_putendl_fd("bad motherfucker", 1);
	s = ft_strnjoin(buf, "fucker :)", 6);
	ft_putendl_fd(s, 1);
	free(s);
	
	buf = strdup("bad mother");
	ft_putendl_fd("With two random strings -1 :", 1);
	ft_putendl_fd("bad motherfucker :)", 1);
	s = ft_strnjoin(buf, "fucker :)", -1);
	ft_putendl_fd(s, 1);
	free(s);

	buf = strdup(""); 
	ft_putendl_fd("With the first string empty :", 1);
	ft_putendl_fd("fucker", 1);
	s = ft_strnjoin(buf, "fucker :)", 6);
	ft_putendl_fd(s, 1);
	free(s);

	buf = strdup(""); 
	ft_putendl_fd("With the first string empty -1 :", 1);
	ft_putendl_fd("fucker :)", 1);
	s = ft_strnjoin(buf, "fucker :)", -1);
	ft_putendl_fd(s, 1);
	free(s);

	buf = strdup("bad mother");
	ft_putendl_fd("With the second string empty :", 1);
	ft_putendl_fd("bad mother", 1);
	s = ft_strnjoin(buf, "", 0);
	ft_putendl_fd(s, 1);
	free(s);

	buf = strdup("");
	ft_putendl_fd("With the two strings empty :", 1);
	ft_putendl_fd("", 1);
	s = ft_strnjoin(buf, "", 0);
	ft_putendl_fd(s, 1);
	free(s);

	buf = strdup("chelou");
	ft_putendl_fd("0 size :", 1);
	ft_putendl_fd("chelou", 1);
	s = ft_strnjoin(buf, "bite", 0);
	ft_putendl_fd(s, 1);
	free(s);
}
