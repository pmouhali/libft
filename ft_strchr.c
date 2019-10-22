#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == '\0' && c != 0)
		return (NULL);
	return ((char*)s);
}
