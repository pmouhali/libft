#include "libft.h"

int		main(void)
{
	char *s;

	ft_putendl("With two random strings :");
	ft_putendl("bad motherfucker :)");
	s = ft_strjoin("bad mother", "fucker :)");
	ft_putendl(s);
	free(s);
	
	ft_putendl("With the first string empty :");
	ft_putendl("fucker :)");
	s = ft_strjoin("", "fucker :)");
	ft_putendl(s);
	free(s);
	
	ft_putendl("With the second string empty :");
	ft_putendl("bad mother");
	s = ft_strjoin("bad mother", "");
	ft_putendl(s);
	free(s);

/* Is the return value supposed to be NULL or a unique value pointer ? */
	ft_putendl("With the two strings empty :");
	ft_putendl("");
	s = ft_strjoin("", "");
	ft_putendl(s);
	free(s);
}
