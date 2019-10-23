#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *a;

	a = s;
	while (n > 0)
	{
		*a = c;
		a++;
		n--;
	}
	return (s);
}

/*
FIRST VERSION
void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *a;

	i = 0;
	a = s;
	while (i <= n)
	{
		*a = (unsigned char)c;
		a = s;
		s = a;
		s++;
		i++;
	}
	return (s);
}
*/
