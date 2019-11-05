#include <ft.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *end_list;
	
	end_list = begin_list;
	while (end_list->next != 0)
		end_list = end_list->next;

	return (end_list);
}
