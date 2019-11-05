#include <ft.h>
#include <stdlib.h>
#include <stdio.h>

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

void	ft_sorted_list_merge(t_list **head, t_list *head2, int (*cmp)())
{
	t_list *prev;
	t_list *copy;
	t_list *next2;

	copy = *head;
	prev = NULL;
	while (copy && head2)
	{
		if ((*cmp)(copy->data, head2->data) >= 0)
		{
			next2 = head2->next;
			head2->next = copy;
			if (prev)
				prev->next = head2;
			else
				*head = head2;
			
			copy = *head;
			prev = NULL;
			head2 = next2;
		}
		else
		{
			prev = copy;
			copy = copy->next;
		}
	}
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
