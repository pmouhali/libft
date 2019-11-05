#include <ft.h>

int		ft_list_size(t_list *begin_list)
{
	t_list *copy;
	int i;

	i = 0;
	copy = begin_list;
	while (copy)
	{
		copy = copy->next;
		i++;
	}
	return (i);
}

