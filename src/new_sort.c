#include "push_swap.h"

void	ft_sort_int_tab2(int *tab, int size)
{
	int temp;
	int counter;
	int i;

	counter = 0;
	size--;
	while (counter < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[(i + 1)])
			{
				temp = tab[i];
				tab[i] = tab[(i + 1)];
				tab[(i + 1)] = temp;
			}
			i++;
		}
		counter++;
	}
}

void move(t_stack *a, t_stack *b, int i)
{
    int count = a->size;

    while (count > 0)
    {
        if (a->first->num < i)
            push(b, a);
        else
            rotate(a);
        count--;
    }
}

void new_sort(t_stack *a)
{
    t_stack *b;
    int sort_list[a->size];
	int i;
	t_element *element;
	
	i = 0;
    b = malloc(5 * sizeof(t_stack));
	element = a->first;
	while (element)
	{
		sort_list[i] = element->num;
		element = element->next;
		i++;
	}
	ft_sort_int_tab2(sort_list, a->size);
    if (a->size > 3)
    {
        i = a->size / 2;
        move(a, b, sort_list[i]);
        new_sort(a);
    }
    else
        sort_small_stack(a);
    new_sort_rev(b, a);
}