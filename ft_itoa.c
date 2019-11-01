#include "libft.h"

static int	ft_itoa_chrcnt(int n)
{
	int a;
	
	if (n == 0)
		return (1);
	a = n < 0 ? 1 : 0;
	while (n != 0)
	{
		a += 1;
		n = n / 10;
	}
	return (a);
}

char		*ft_itoa(int n)
{
	char *toa;
	int i;
	int m;

	i = ft_itoa_chrcnt(n);
	m = 1;
	if ((toa = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	if (n < 0)
	{
		toa[0] = '-';
		m = -1;
	}
	if (n == 0)
		toa[0] = '0';
	toa[i] = '\0';
	while (n != 0)
	{
		toa[--i] = ((n % 10) * m) + 48;
		n = n / 10;
	}
	return (toa);
}

