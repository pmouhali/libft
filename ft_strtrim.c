#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *new;
	int i;
	int i1;
	int i2;

	i = 0;
	while (ft_index(set, s1[i]) != -1 && s1[i] != '\0')
		i++;
	i1 = i;
	while (s1[i] != '\0')
		i++;
	i--;
	while (ft_index(set, s1[i]) != -1 && i > 0)
		i--;
	i2 = i;
	i = i2 - i1 < 0 ? 0 : (i2 - i1) + 2;
	if ((new = (char *)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	i = -1;	
	while (++i + i1 <= i2)
		new[i] = s1[i + i1];
	new[i] = '\0';
	return (new);
}
