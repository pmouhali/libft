#include <ft_list.h>
#include <stdlib.h>

void	ft_sorted_list_insert(t_list **head, void *data, int (*cmp)())
{
	t_list *copy;
	t_list *elem;
	t_list *prev;

	copy = *head;
	prev = NULL;
	while (copy)
	{
		if ((*cmp)(copy->data, data) >= 0)
		{
			elem = ft_create_elem(data);
			elem->next = copy;
			if (prev)
				prev->next = elem;
			else
				*head = elem;
			return;
		}
		prev = copy;
		copy = copy->next;
	}
}

// "de sorte que la liste reste triée par ordre croissant"
// si la fonction cmp ne compare pas par ordre croissant : fail.
// piège ?

// attention : si une insertion en début de liste est possible
// penser à mettre à jour le pointeur *head
