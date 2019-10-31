#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar_fd((n % 10) + 48, fd);
	}
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
}
