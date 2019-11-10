#include <fcntl.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	(void)ac;
	char buf[BUFFER_SIZE];
	int fd;
/* FIRST CALL */
	fd = open(av[1], O_RDONLY);	
	read(fd, buf, BUFFER_SIZE - 1);
	ft_putendl_fd(buf, 1);
/* SECOND CALL */
	read(fd, buf, BUFFER_SIZE - 1);
	ft_putendl_fd(buf, 1);
	close(fd);
}
