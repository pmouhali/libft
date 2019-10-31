#include "libft.h"

int		ft_index(char const *s, char c)
{
	int i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}
