#include "libft.h"

int		main(int ac, char **av)
{
	(void)ac;

	ft_putstr("\x1b[32m");
	ft_putstr(av[1]);
	ft_putstr("\x1b[0m\n");
	ft_putstr(av[2]);
}
