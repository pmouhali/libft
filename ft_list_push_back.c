#include <ft.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;

	if (list)
	{
		while (list->next != 0)
			list = list->next;
		
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data); 
}

// pour ajouter un nouvel element :
// se déplacer jusqu'au dernier element de la liste
// c'est à dire celui ou next vaut NULL
// et créer un nouvel element dans son next
// ft_create_elem créer un élement et renvoie un pointeur dessus
// donc le next du dernier element contiendra bien
// un pointeur vers le nouvel element créé.
// on travaille avec une copie du pointeur sur le début de la liste
// comme ça il n'est pas perdu après création d'un nouvel element
// sauf si la liste est vide, alors on l'initialise
// en créant directement un nouvel element et en assignant son pointeur
// au pointeur de début de liste (logique mdr).
