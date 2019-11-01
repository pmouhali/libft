#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *new;
	
	if (!*s)
		return (NULL);
	if ((new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
