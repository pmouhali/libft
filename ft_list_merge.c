#include <ft_list.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *copy1;

	copy1 = *begin_list1;
	while (copy1 && copy1->next)
		copy1 = copy1->next;
	if (copy1)	
		copy1->next = begin_list2;
}
