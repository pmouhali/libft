#include <ft.h>
#include <stdlib.h>

int 	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] != '\0')
		i++;
	if (s1[i] - s2[i] > 0)
		return (1);
	else if (s1[i] - s2[i] < 0)
		return (-1);
	return (0);
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

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *copy1;

	copy1 = *begin_list1;
	while (copy1 && copy1->next)
		copy1 = copy1->next;
	if (copy1)	
		copy1->next = begin_list2;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *prev;
	t_list *curr;
	t_list *next;
	
	prev = NULL;
	curr = *begin_list;
	while (curr->next)
	{
		next = curr->next;
		if ((*cmp)(curr->data, next->data) > 0)
		{
			if (prev)
				prev->next = next;
			else
				*begin_list = next;
		
			curr->next = next->next;
			next->next = curr;
			prev = NULL;
			curr = *begin_list;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}

void	ft_sorted_list_merge(t_list **head, t_list *head2, int (*cmp)())
{
	ft_list_merge(head, head2);
	ft_list_sort(head, &ft_strcmp);
}

int	main(void)
{
	t_list *list;
	t_list *list2;
	list = NULL;
	list2 = NULL;

	ft_list_push_front(&list, "7");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "1");
	
	ft_list_push_front(&list2, "3");
	ft_list_push_front(&list2, "2");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "4");
	
	ft_sorted_list_merge(&list, list2, &ft_strcmp);
	print_list(list);
}
