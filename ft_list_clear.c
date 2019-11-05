#include <stdlib.h>
#include <ft_list.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *copy;

	copy = *begin_list;
	while (copy)
	{
		copy = copy->next;
		free(*begin_list);
		*begin_list = copy;
	}
}

//     copy
//		 *
//    | | | | | | | | | | | | | |NULL <= linked_list
//     * 
// begin_list => free
