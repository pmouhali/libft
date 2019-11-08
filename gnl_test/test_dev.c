#include "get_next_line.h"

#include <fcntl.h>

int	main(int ac, char **av)
{
	if (ac == 1) { ft_putendl_fd("no input given", 1); return (0); }
	
	char *line;
	int ret;
	int fd;

	if ((fd = open(av[1], O_RDONLY)) == -1) { ft_putendl_fd("open failed", 1); return (0); }

	ret = get_next_line(fd, &line);
	ft_putnbr_fd(ret, 1);
	ft_putstr_fd("\n", 1);
	if (!line)
		ft_putendl_fd("line is null", 1);
	else
	{
		ft_putendl_fd(line, 1);
		free(line);
	}
	ret = get_next_line(fd, &line);
	ft_putnbr_fd(ret, 1);
	ft_putstr_fd("\n", 1);
	if (!line)
		ft_putendl_fd("line is null", 1);
	else
	{
		ft_putendl_fd("=== line content ===", 1);
		ft_putendl_fd(line, 1);
		ft_putendl_fd("====================", 1);
		free(line);
	}

	close(fd);
}
