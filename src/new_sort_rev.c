#include "push_swap.h"

void	conect_list(t_stack *a, t_stack *a2)
{
	a2->last->next = a->first;
	a->first->prev = a2->last;
	a->first = a2->first;
	a2->first = NULL;
	a2->last = NULL;
}

void move_rev_to_a(t_stack *b, t_stack *a2, int i, int num_element)
{
	int rev;

	rev = 0;
	/*printf("num == %d\n", i);
	printf("I == %d\n", num_element);
	print_stack(a, b);*/
    while (num_element > 0)
    {
		if (b->first->num > i && b->first->num < b->first->next->num)
			swap(b);
        if (b->first->num > i)
		{
            push(a2, b);
			num_element--;
		}
        else
		{
            rotate(b);
			rev++;
		}
    }
	while (rev > 0)
	{
		rev_rotate(b);
		rev--;
	}
}

void move_rev_to_b(t_stack *a2, t_stack *b, int i, int num_element)
{
	int rev;

	rev = 0;
    while (num_element > 0)
    {
        if (a2->first->num > i)
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

void new_sort_rev(t_stack *b, t_stack *a)
{
	int sort_list[b->size];
	int i;
	t_element *element;
	t_stack *a2;
	
	i = 0;
	element = b->first;
	a2 = malloc(sizeof(t_stack));
	a2->name = 'a';
	while (element)
	{
		sort_list[i] = element->num;
		element = element->next;
		i++;
	}
	ft_sort_int_tab(sort_list, b->size);
	if(b->size > 2)
	{
		i = (b->size / 2);
		if (b->size == 3)
			i = 1;
		move_rev_to_a(b, a2, sort_list[i], b->size - i - 1);
		if (check_sort(a2) == 1)
			conect_list(a, a2);
		else
		{
			move_to_b_again(a2, b);
			conect_list(a, a2);
		}
		new_sort_rev(b, a);
	}
	if (b->size == 2 && b->first->num < b->first->next->num)
		swap(b);
	push(a, b);
	push(a, b);
}
