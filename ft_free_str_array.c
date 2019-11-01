#include "libft.h"

void	ft_free_str_array(char **ar)
{
	int i;

	i = 0;
	while (ar[i] != NULL)
	{
		free(ar[i]);
		i++;
	}
}
