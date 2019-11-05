#include <ft.h>
#include <stdlib.h>

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		ft_putchar('\n');
		list = list->next;
	}
}

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

int		main(void)
{
	t_list *list;

//	list = ft_create_elem("first!");

	list = NULL;

	ft_list_push_front(&list, "pushfront1");
	ft_list_push_front(&list, "pushfront2");
	ft_list_push_front(&list, "pushfront3");

	print_list(list);
}
