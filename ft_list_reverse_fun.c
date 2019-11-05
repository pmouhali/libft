#include <ft_list.h>
#include <stdlib.h>

t_list  *ft_list_at_bis(t_list *head, unsigned int nbr)
{
	int i;

	i = 0;
	while (head && ++i != nbr)
		head = head->next;
	if (i == nbr)
		return (head);
	return (NULL);
}

int		ft_list_size_bis(t_list *head)
{
	int i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int i;
	int j;
	void *tmp;
	t_list *end;
	t_list *copy;

	copy = begin_list;
	j = ft_list_size_bis(begin_list);
	i = 1;
	while (i < j)
	{
		end = ft_list_at_bis(begin_list, j);
		
		tmp = copy->data;
		copy->data = end->data;
		end->data = tmp;
		
		i++;
		copy = copy->next;
		j--;
	}
}

// la liste est bien reverse
// et begin_list est set correctement dans list_reverse_fun

// mais pas dans le main, begin_list est resté à l'ancien first elem
// qui pointe bien sur null puisque la reverse a bien eu lieu
// voilà pourquoi une print list ne print qu'un element.

// comment modifier la valeur du pointeur dans list_rev_fun ? idk.
// you can't, you have to modify the data member. lol.
