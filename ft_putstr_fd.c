#include "libft.h"

void    ft_putstr_fd(const char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
