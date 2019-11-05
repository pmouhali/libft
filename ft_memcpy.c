#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		(*(char*)dest++) = (*(char*)src++);
		n--;
	}
	return (dest);
}
