#include "libft.h"

void	ft_putstr_array(char **ar)
{
	int i;

	i = 0;
	while (ar[i] != NULL)
	{
		ft_putendl(ar[i]);
		i++;
	}
}
