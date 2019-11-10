#include "get_next_line.h"

#include <fcntl.h>

int	main(int ac, char **av)
{
//	if (ac == 1) { ft_putendl_fd("no input given", 1); return (0); }
	
	char *line;
	int ret;
//	int fd;

(void)ac;
(void)av;
//	if ((fd = open(av[1], O_RDONLY)) == -1) { ft_putendl_fd("open failed", 1); return (0); }
	
	ret = 1;
	while (ret)
	{
		ret = get_next_line(-1, &line);
		if (ret == -1)
		{
			ft_putendl_fd("ret = -1", 1);
			return (0);
		}
		ft_putnbr_fd(ret, 1);
		ft_putstr_fd("\n", 1);
		if (!line)
			ft_putendl_fd("line is null", 1);
		else
		{
			ft_putendl_fd(line, 1);
			free(line);
		}
	}

//	close(fd);
}
