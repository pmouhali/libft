#include <stdlib.h>
#include <ft_list.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;

	i = 0;
	while(begin_list && ++i != nbr)
		begin_list = begin_list->next;
	
	if (i == nbr)
		return (begin_list);
	return (NULL);
}

// if nbr > list_size returns NULL
// if nbr <= 0 returns NULL
// if list is empty returns NULL
