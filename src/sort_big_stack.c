/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:32:29 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/05 12:16:14 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prepare_stack(t_stack *stack, int max)
{
	t_element *element;
	int i;

	element = stack->first;
	i = 0;
	while (element->num != max)
	{
		element = element->next;
		i++;
	}
	if (i <= stack->size / 2)
		while (stack->first->num != max)
			rotate(stack);
	else
		while (stack->first->num != max)
			rev_rotate(stack);
}

void	sort_in_a(t_stack *a, t_stack *b, int i, int max)
{
	t_element *element;
	int count;

	element = a->first;
	count = 0;
	if (i < 10)
		prepare_stack(a, a->max);
	prepare_stack(b, max);
	a->max = b->last->num;
	while (b->size > 0)
		push(a, b);
}

void	sort_in_b(t_stack *a, t_stack *b)
{
	if (a->first->num > b->first->num)
		while (a->first->num > b->last->num)
		{
			if (b->first->num > b->last->num)
				break ;
			rev_rotate(b);
		}
	else
		while (a->first->num < b->first->num)
		{
			rotate(b);
			if (b->last->num < b->first->num)
				break ;
		}
		push(b, a);
}

void	sort_big_stack(t_stack *a, t_stack *b)
{
	int *chunks;
	int i;
	int x;
	int count;

	chunks = get_chunks(a);
	i = 10;
	count = a->size;
	while (i > 0)
	{
		x = -1;
		while (++x <= count)
		{
			if (a->first->num > chunks[i - 1] && a->first->num <= chunks[i])
			{
				if (b->size < 2)
					push(b, a);
				else
					sort_in_b(a, b);
			}
			rev_rotate(a);
		}
		count -= b->size;
		sort_in_a(a, b, i, chunks[i]);
		i--;
	}
	free(chunks);
	rev_rotate(a);
}
