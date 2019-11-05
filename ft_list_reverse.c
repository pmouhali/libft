#include <ft_list.h>
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *current;
	t_list *next;

	prev = NULL;
	current = *begin_list;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*begin_list = prev;
}

//          TEA -> CARROT -> ZUCHINNI -> CAKE -> |NULL
// NULL| <- TEA <- CARROT <- ZUCHINNI <- CAKE

// pour inverser le flux :
// chaque next doit pointer sur l'elem précédent
// et le premier devra pointer NULL
// donc on parcours la liste une seule fois dans le sens normal

// save current qui devient prev
// next de current pointe sur prev
// etc
// head pointe sur last elem qui pointe bien sur l'elem d'avant
// l'elem d'avant pointe aussi sur l'elem d'avant etc

// les elements n'ont pas changer d'adresse dans la mémoire

// seul l'attribut next a changer de valeur
// et ça suffit à inverser le flow
