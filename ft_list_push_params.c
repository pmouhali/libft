#include <ft.h>
#include <stdlib.h>
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	if (begin_list)
	{
		elem = ft_create_elem(data);
		elem->next = *begin_list;
		*begin_list = elem;
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int i;
	t_list *list;

	i = 0;
	list = NULL;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
