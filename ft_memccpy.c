#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *cdest;
	const unsigned char *csrc;

	cdest = dest;
	csrc = src;
	while (n > 0 && *csrc != (unsigned char)c)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
		n--;
	}
	if (n == 0)
		return (NULL);
	if (n > 0 && *csrc == (unsigned char)c)
		*cdest = *csrc;
	return (cdest + 1);
}

/*
** DESCRIPTION
**
** The  memccpy() function copies no more than n bytes from memory area 
** src to memory area dest, stopping when the character c is found.
** If the memory areas overlap, the results are undefined.
**
** RETURN VALUE
**
** The memccpy() function returns a pointer to the next character in dest
** after c, or NULL if c was not found in the first n characters of src.
*/
