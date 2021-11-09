#include "push_swap.h"

void	ft_sort_int_tab2_rev(int *tab, int size)
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

void move_rev(t_stack *a, t_stack *b, int i)
{
    int count;
	int rev;

	count = a->size;
	rev = 0;
    while (count > 0)
    {
		printf("I == %d\n", i);
		print_stack(b, a);
		if (b->first->num > b->first->next->num)
				swap(b); // Comprobar que el número primero de la lista b es mayor que el siguiente. Además, comprobar que es menor que el primero de la lista a, si no es así, buscar su posición rotando la lista a, insertandolo entonces y revertir la lista a su posición original.
        if (a->first->num > i)
            push(b, a);
        else
		{
            rotate(a);
			rev++;
		}
        count--;
    }
	print_stack(b, a);
	while (rev > 0)
	{
		rev_rotate(a);
		rev--;
	}
}

void new_sort_rev(t_stack *a, t_stack *b)
{
	int sort_list[a->size];
	int i;
	t_element *element;
	
	i = 0;
	element = a->first;
	while (element)
	{
		sort_list[i] = element->num;
		element = element->next;
		i++;
	}
	ft_sort_int_tab2_rev(sort_list, a->size);
	if (a->size > 2)
    {
        i = a->size / 2;
        move_rev(a, b, sort_list[i]);
        new_sort_rev(a, b);
    }
	while (a->size > 0)
		push(b, a); // los ultimos números deben buscar en que posición de la lista a meterse. Esto sumará más movimientos pero de momento es la mejor opción.
	if (b->first->num > b->first->next->num)
				swap(b);
}