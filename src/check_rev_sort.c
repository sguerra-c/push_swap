#include "push_swap.h"

int   check_rev_sort(t_stack *b)
{
	t_element *element;

	element = b->last->prev;
	while (element)
	{
		if (element->next->num > element->num)
			return (0);
	element = element->prev;
	}
	return (1);
}