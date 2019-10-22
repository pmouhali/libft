#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	while (s[i])
		i++;
	if ((new = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		new[i] = *s;
		i++;
		s++;
	}
	return (new);
}
