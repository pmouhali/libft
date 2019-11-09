#include "get_next_line.h"

int	main(void)
{
	char *t = "ab\0c";
	int r;

	r = ft_index(t, 0);
	if (r == 2)
		ft_putendl_fd("OK", 1);
	else
	{
		ft_putendl_fd("KO : got : ", 1);
		ft_putnbr_fd(r, 1);
		ft_putendl_fd("", 1);
	}
}
