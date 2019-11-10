#include "get_next_line.h"

#include <fcntl.h>

/* What happen if line is (null) */
/* Given a file, print return value and value of line for each loop turn, and print total number of read lines */

int	main(int ac, char **av)
{
	if (ac == 1) { ft_putendl_fd("no input given", 1); return (0); }
	
	int ret;
	int t;
	int fd;

	fd = open(av[1], O_RDONLY);
	ret = 1;
	t = 0;
	while ((ret = get_next_line(fd, NULL)))
	{
		ft_putnbr_fd(ret, 1);
		ft_putstr_fd("\n", 1);
		if (ret == -1)
			return (0);
		t += ret;
	}

	ft_putnbr_fd(t, 1);
	ft_putstr_fd("\n", 1);

	close(fd);
}
