#include <ft_list.h>
#include <stdlib.h>

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

// pas à la norme : 2 lignes de trop
// idée : les deux blocks similaires en 10-11 24-25 => fonction reset()
