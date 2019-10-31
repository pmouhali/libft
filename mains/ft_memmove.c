#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n);

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
	char d1[] = "oldstring";
	char s1[] = "newstring";
	char d2[] = "oldstring";
	char s2[] = "newstring";

	printf("%s\n", d1);
	memmove(d1, s1, 10);
	printf("%s\n\n", d1);
	printf("%s\n", d2);
	ft_memmove(d2, s2, 10);
	printf("%s\n\n", d2);

	char d3[] = "oldstring";
	char *s3 = d3 + 1;
	char d4[] = "oldstring";
	char *s4 = d4 + 1;

	printf("%s\n", d3);
	memmove(d3, s3, 10);
	printf("%s\n\n", d3);
	printf("%s\n", d4);
	ft_memmove(d4, s4, 10);
	printf("%s\n\n", d4);

	int t1[] = {20, 30, 40, 0};
	int *t2 = t1 + 1;
	int t3[] = {20, 30, 40, 0};
	int *t4 = t3 + 1;

	printab(t1, 4);
	memmove(t1, t2, 16);
	printab(t1, 4);
	printab(t3, 4);
	ft_memmove(t3, t4, 16);
	printab(t3, 4);
}
