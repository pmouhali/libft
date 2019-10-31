#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	size_t size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if ((new = (char*)malloc(sizeof(char) * (size))) == NULL)
		return (NULL);
	size = 0;
	while (s1[size] != '\0')
	{
		new[size] = s1[size];
		size++;
	}
	while (*s2 != '\0')
	{
		new[size] = *s2;
		size++;
		s2++;
	}
	new[size] = '\0';
	return (new);
}
