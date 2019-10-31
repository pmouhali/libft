#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *cs;

	cs = s;
	i = 0;
	while (*cs != (unsigned char)c && i < n)
	{
		i++;
		cs++;
	}
	if (i == n)
		return (NULL);
	return ((void*)cs);
}
