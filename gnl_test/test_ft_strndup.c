#include "get_next_line.h"

int	main(void)
{
	char *s;

	s = ft_strndup("a", 3);
	ft_putendl_fd(s, 1);
	free(s);
}
