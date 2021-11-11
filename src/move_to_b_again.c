#include "push_swap.h"

void    move_again(t_stack *a2, t_stack *b, int i, int num_element)
{
    int rev;

	rev = 0;
    while (num_element > 0)
    {
        if (a2->first->num < i)
		{
            push(b, a2);
			num_element--;
            if (b->size > 1 && b->first->num < b->first->next->num)
                swap(b);
		}
        else
		{
            rotate(a2);
			rev++;
		}
    }
	while (rev > 0)
	{
		rev_rotate(a2);
		rev--;
	}
}

void    move_to_b_again(t_stack *a2, t_stack *b)
{
    int i;
    int sort_list[a2->size];
    t_element *element;

    i = 0;
	element = a2->first;
	while (element)
	{
		sort_list[i] = element->num;
		element = element->next;
		i++;
	}
	ft_sort_int_tab(sort_list, a2->size);
    if (a2->size > 2 )
    {
        i = a2->size / 2;
        if (a2->size == 3)
            i = 1;
        move_again(a2, b, sort_list[i], i);
        if (check_sort(a2) == 0)
            move_to_b_again(a2, b);
    }
    else
        if (a2->first->num > a2->first->next->num)
            swap(a2);
}