#include "libft.h"
#include <string.h> 

int		split_cmp_array(char **exp, char **got)
{
	while (*exp)
	{
		if (*got == NULL || strcmp(*exp, *got))
			return (-1);
		exp++;
		got++;
	}
	return (0);
}

void	ft_free_str_array(char **a)
{
	int i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a[i]);
}

void	ft_putstr_array(char **a)
{
	int i = 0;
	while (a[i])
	{
		ft_putendl_fd(a[i], 1);
		i++;
	}
}

int		main(void)
{
	char **got;

ft_putstr_fd("With delimiters at the start, middle and end : ", 1);
	char **exp1 = (char*[6]){"Now", "is", "the", "winter", "of", NULL};
	got = ft_split(" Now is the  winter   of ", ' ');
	if (split_cmp_array(exp1, got))
	{
		ft_putendl_fd("KO", 1);
		ft_putstr_array(got);
		ft_putendl_fd("instead of expected :", 1);
		ft_putstr_array(exp1);
	}
	else
		ft_putendl_fd("OK", 1);
	ft_free_str_array(got);

ft_putstr_fd("           With delimiters at the start only : ", 1);
	char **exp2 = (char*[2]){"our", NULL};
	got = ft_split("        our", ' ');
	if (split_cmp_array(exp2, got))
	{
		ft_putendl_fd("KO", 1);
		ft_putstr_array(got);
		ft_putendl_fd("instead of expected :", 1);
		ft_putstr_array(exp2);
	}
	else
		ft_putendl_fd("OK", 1);
	ft_free_str_array(got);

ft_putstr_fd("          With delimiters in the middle only : ", 1);
	char **exp3 = (char*[5]){"discontent,", "made", "glorious", "summer", NULL};
	got = ft_split("discontent, made glorious summer", ' ');
	if (split_cmp_array(exp3, got))
	{
		ft_putendl_fd("KO", 1);
		ft_putstr_array(got);
		ft_putendl_fd("instead of expected :", 1);
		ft_putstr_array(exp3);
	}
	else
		ft_putendl_fd("OK", 1);
	ft_free_str_array(got);

ft_putstr_fd("             With delimiters at the end only : ", 1);
	char **exp4 = (char*[2]){"by", NULL};
	got = ft_split("by       ", ' ');
	if (split_cmp_array(exp4, got))
	{
		ft_putendl_fd("KO", 1);
		ft_putstr_array(got);
		ft_putendl_fd("instead of expected :", 1);
		ft_putstr_array(exp4);
	}
	else
		ft_putendl_fd("OK", 1);
	ft_free_str_array(got);

ft_putstr_fd("                        With delimiters only : ", 1);
	char **exp5 = (char*[1]){NULL};
	got = ft_split("        ", ' ');
	if (split_cmp_array(exp5, got))
	{
		ft_putendl_fd("KO", 1);
		ft_putstr_array(got);
		ft_putendl_fd("instead of expected :", 1);
		ft_putstr_array(exp5);
	}
	else
		ft_putendl_fd("OK", 1);
	ft_free_str_array(got);

ft_putstr_fd("                           With empty string : ", 1);
	char **exp6 = (char*[1]){NULL};
	got = ft_split("", ' ');
	if (split_cmp_array(exp6, got))
	{
		ft_putendl_fd("KO", 1);
		ft_putstr_array(got);
		ft_putendl_fd("instead of expected :", 1);
		ft_putstr_array(exp6);
	}
	else
		ft_putendl_fd("OK", 1);
	ft_free_str_array(got);

ft_putstr_fd("            With no delimiters in the string : ", 1);
	char **exp7 = (char*[2]){"by this sun", NULL};
	got = ft_split("by this sun", 0);
	if (split_cmp_array(exp7, got))
	{
		ft_putendl_fd("KO", 1);
		ft_putstr_array(got);
		ft_putendl_fd("instead of expected :", 1);
		ft_putstr_array(exp7);
	}
	else
		ft_putendl_fd("OK", 1);
	ft_free_str_array(got);
}

/* Be careful : allocate only the required space */
/* free the array if an issue occurs before end of process */
