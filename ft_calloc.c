#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *b;
	unsigned char *c;
	size_t i;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if ((b = malloc(nmemb * size)) == NULL)
		return (NULL);
	i = 0;
	c = b;
	while (i < nmemb * size)
	{
		c[i] = 0;
		i++;
	}
	return (b);
}

/*
**	if malloc returns NULL, return NULL.
**	if nmemb or size is zero, return a pointer to a unique element set to zero
**	else allocate with malloc, set each element to zero and return the pointer
*/
