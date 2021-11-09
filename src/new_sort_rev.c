#include "push_swap.h"

void	prepare_to_push(t_stack *a, t_stack *b)
{
	if (b->first->num > b->first->next->num)
		swap(b);
	if (a->size > 2 && a->first->num < a->first->next->num)
		swap(a);
}

void	push_to_stack(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	if (b->first->num < a->first->num)
		while (b->first->num < a->first->num)
		{
			rotate(b);
			i++;
		}
	push(b, a);
	while(--i >= 0)
		rev_rotate(b);
}

void move_rev(t_stack *a, t_stack *b, int i)
{
    int count;
	int rev;

	count = a->size;
	rev = 0;
    while (count > 0)
    {
        if (a->first->num > i)
            push(b, a);
        else
		{
            rotate(a);
			rev++;
		}
        count--;
    }
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
	ft_sort_int_tab(sort_list, a->size);
	if (a->size > 2)
    {
        i = a->size / 2;
        move_rev(a, b, sort_list[i]);
        new_sort_rev(a, b);
    }
	while (a->size > 0)
		push(b, a);
	if (b->first->num > b->first->next->num)
			swap(b);
}
