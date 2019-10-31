#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

#include "libft.h"

int		main(void)
{
	char dest1[] = "xxxxxxxxxxx";	
	char *src;	
	char dest2[] = "xxxxxxxxxxx";	
	int rv;
	
	src = "blimflarck";

	rv = strlcpy(dest1, src, 12);
	printf("%s\n", dest1);
	printf("%d\n", rv);
	rv = ft_strlcpy(dest2, src, 12);
	printf("%s\n", dest2);
	printf("%d\n", rv);

	src = "aaaaa";

	rv = strlcpy(dest1, src, 13);
	printf("%s\n", dest1);
	printf("%d\n", rv);
	rv = ft_strlcpy(dest2, src, 13);
	printf("%s\n", dest2);
	printf("%d\n", rv);

	src = "bbb";

	rv = strlcpy(dest1, src, 14);
	printf("%s\n", dest1);
	printf("%d\n", rv);
	rv = ft_strlcpy(dest2, src, 14);
	printf("%s\n", dest2);
	printf("%d\n", rv);
	
	src = "+++++++";

	rv = strlcpy(dest1, src, 15);
	printf("%s\n", dest1);
	printf("%d\n", rv);
	rv = ft_strlcpy(dest2, src, 15);
	printf("%s\n", dest2);
	printf("%d\n", rv);

	src = "+-+-+-+-+-";

	rv = strlcpy(dest1, src, 1);
	printf("%s\n", dest1);
	printf("%d\n", rv);
	rv = ft_strlcpy(dest2, src, 1);
	printf("%s\n", dest2);
	printf("%d\n", rv);
	
	src = "oooooooooo";

	rv = strlcpy(dest1, src, 0);
	printf("%s\n", dest1);
	printf("%d\n", rv);
	rv = ft_strlcpy(dest2, src, 0);
	printf("%s\n", dest2);
	printf("%d\n", rv);
}
