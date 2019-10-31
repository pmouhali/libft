#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *temp;
	const unsigned char *csrc;
	unsigned char *cdest;

	if ((temp = (unsigned char*)malloc(sizeof(unsigned char) * n)) == NULL)
		return (dest);
	csrc = src;
	i = -1;
	while (++i < n)
		temp[i] = csrc[i];
	cdest = dest;
	i = -1;
	while (++i < n)
		cdest[i] = temp[i];
	return (dest);
}
