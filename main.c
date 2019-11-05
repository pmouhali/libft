#include <ft.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);
//int		ft_list_size(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
//t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void	ft_list_reverse_fun(t_list *begin_list);
void	ft_sorted_list_insert(t_list **head, void *data, int (*cmp)() );

void	ft_test(char *str)
{
	str[0] += 2;
}

int		main(int argc, char **argv)
{
	(void)argc;
	t_list *list;
	t_list *list2;

	list = NULL;
	list = ft_list_push_params(argc, argv);	
	list2 = NULL;
//	ft_list_push_back(&list2, "2-1");	
//	ft_list_push_back(&list2, "2-2");	
//	ft_list_push_back(&list2, "2-3");	
	
	print_list(list);	
	ft_putchar('\n');

//	print_list(list2);	
//	ft_putchar('\n');
	
	ft_sorted_list_insert(&list, "!", &ft_strcmp);
	print_list(list);	
	
}

// morale de l'histoire bitch :
// toujours initialiser ses pointeurs à NULL !

// using free() on a pointer does not return it to NULL
// free() only free the memory but do not change the pointer
// but the pointer remains invalid after the use of free !
