#include "push_swap.h"

void move_rev_to_b(t_stack *a, t_stack *b, int i, int num_element)
{
	int rev;

	rev = 0;
	/*printf("REV\n");
	printf("num == %d\n", i);
	printf("I == %d\n", num_element);*/
	//print_stack(a, b);
    while (num_element > 0)
    {
        if (a->first->num < i)
		{
            push(b, a);
			num_element--;
			if (b->size > 1 && b->first->num > b->first->next->num)
				swap(b);
		}
        else
		{
            rotate(a);
			rev++;
		}
    }
	while (rev > 0)
	{
		rev_rotate(a);
		rev--;
	}
}

void	move_back_to_b(t_stack *a, t_stack *b)
{
	t_element *element;
	int i;
	int sort_list[a->size];

	i = 0;
	element = a->first;
	while (element)
	{
		sort_list[i] = element->num;
		element = element->next;
		i++;
	}
	ft_sort_int_tab(sort_list, b->size);
	if(a->size > 2)
	{
		i = a->size / 2;
		if (a->size == 3)
            i = 1;
		move_rev_to_b(a, b, sort_list[i], i);
		new_sort_rev(b);
	}
	else
		sort_small_stack(a);
}

void move_rev(t_stack *b, t_stack *a, int i, int num_element)
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
            push(a, b);
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
	//print_stack(a, b);
	while (check_sort(a) == 0)
		move_back_to_b(a, b);
}

void new_sort_rev(t_stack *b)
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
		move_rev(b, a2, sort_list[i], b->size - i - 1);
		new_sort_rev(b);
	}
	if (b->size == 2 && b->first->num < b->first->next->num)
		swap(b);
	push(a2, b);
	push(a2, b);
}
