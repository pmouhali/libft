#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n);

void	printab(int *tab, int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%d | ", tab[i]);
		i++;
	}
	printf("\n");
}

int		main(void)
{
	char s1[] = "string";
	int tab[] = {20, 30, 40, 45};

	printf("o %s\n", (char*)memchr(s1, 'r', 7));
	printf("o %s\n", (char*)memchr(s1, 'h', 7));
	printf("o %s\n", (char*)memchr(tab, 45, 40));
	printf("o %s\n", (char*)memchr(tab, 44, 40));

	printf("f %s\n", (char*)ft_memchr(s1, 'r', 7));
	printf("f %s\n", (char*)ft_memchr(s1, 'h', 7));
	printf("f %s\n", (char*)ft_memchr(tab, 45, 40));
	printf("f %s\n", (char*)ft_memchr(tab, 44, 40));
}
