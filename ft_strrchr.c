#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *rv;

	rv = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			rv = (char*)s;
		s++;
	}
	if (c == '\0')
		return((char*)s);
	return (rv);
}
