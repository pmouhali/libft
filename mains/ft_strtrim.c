#include "libft.h"
#include <string.h> 

void	ft_putstr(char *s) { write(1, s, ft_strlen(s)); }
void	ft_putendl(char *s) { write(1, s, ft_strlen(s)); write(1, "\n", 1); }

int		main(void)
{
	char *s;

ft_putstr("with set included characters at start and end of string : ");
	s = ft_strtrim(" x6HELL666HELL6x ", " x6");
	if (strcmp(s, "HELL666HELL"))
	{
		ft_putstr("KO : ");
		ft_putendl(s);
	}
	else
		ft_putendl("OK");
	free(s);

ft_putstr("   with set included characters only at start of string : ");
	s = ft_strtrim(" x6HELL666HELL", " x6");
	if (strcmp(s, "HELL666HELL"))
	{
		ft_putstr("KO : ");
		ft_putendl(s);
	}
	else
		ft_putendl("OK");
	free(s);

ft_putstr("     with set included characters only at end of string : ");
	s = ft_strtrim("HELL666HELL6x ", " x6");
	if (strcmp(s, "HELL666HELL"))
	{
		ft_putstr("KO : ");
		ft_putendl(s);
	}
	else
		ft_putendl("OK");
	free(s);

ft_putstr("        with set included characters only in the middle : ");
	s = ft_strtrim("HELL6 xx6 xx6xxx HELL", " x6");
	if (strcmp(s, "HELL6 xx6 xx6xxx HELL"))
	{
		ft_putstr("KO : ");
		ft_putendl(s);
	}
	else
		ft_putendl("OK");
	free(s);

ft_putstr("     with a string only made of set included characters : ");
	s = ft_strtrim(" 666x xx xxx6", " x6");
	if (strcmp(s, ""))
		ft_putendl("KO : does not return an empty string");
	else
		ft_putendl("OK");
	free(s);

ft_putstr("                           with an empty characters set : ");
	s = ft_strtrim(" x6HELL666HELL6x ", "");
	if (strcmp(s, " x6HELL666HELL6x "))
	{
		ft_putstr("KO : ");
		ft_putendl(s);
	}
	else
		ft_putendl("OK");
	free(s);
	
ft_putstr("                                   with an empty string : ");
	s = ft_strtrim("", "");
	if (strcmp(s, ""))
		ft_putendl("KO : does not return an empty string");
	else
		ft_putendl("OK");
	free(s);

ft_putstr("                                  with a NULL parameter : ");
	s = ft_strtrim("HELL", NULL);
	if (s)
		ft_putendl("KO : does not return an empty string");
	else
		ft_putendl("OK");
	free(s);
}

/* Be careful to allocate only the required space ! */
/* Be careful to what happens when a NULL parameters is sent ! */
