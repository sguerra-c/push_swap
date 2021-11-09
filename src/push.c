/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:19:22 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/06 18:19:24 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	first_push(t_stack *stack_in, t_stack *stack_out)
{
	t_element	*element;

	element = stack_out->first;
	if (element->next)
	{
		element->next->prev = NULL;
		stack_out->first = element->next;
	}
	else
		stack_out->first = NULL;
	element->next = NULL;
	element->prev = NULL;
	stack_in->first = element;
	stack_in->last = element;
}

void	last_push(t_stack *stack_in, t_stack *stack_out)
{
	t_element	*last_element;
	t_element	*next_element;

	last_element = stack_out->first;
	next_element = stack_in->first;
	last_element->next = next_element;
	last_element->prev = NULL;
	next_element->prev = last_element;
	stack_in->first = last_element;
	stack_out->first = NULL;
	stack_out->last = NULL;
}

void	normal_push(t_stack *stack_in, t_stack *stack_out)
{
	t_element	*first_element;
	t_element	*next_element;

	first_element = stack_out->first;
	next_element = stack_in->first;
	first_element->next->prev = NULL;
	stack_out->first = first_element->next;
	next_element->prev = first_element;
	first_element->next = next_element;
	first_element->prev = NULL;
	stack_in->first = first_element;
}

void	write_push(t_stack *stack_in)
{
	if (stack_in->name == 'a')
		write(1, "pa\n", 3);
	else
		write(1, "pb\n", 3);
}

void	push(t_stack *stack_in, t_stack *stack_out)
{
	if (!stack_out->first)
	{
		write(1, "pa\n", 3);
		return	;
	}
	if (!stack_in->first)
		first_push(stack_in, stack_out);
	else
	{
		if (stack_out->first == stack_out->last)
			last_push(stack_in, stack_out);
		else
			normal_push(stack_in, stack_out);
	}
	write_push(stack_in);
	stack_in->size += 1;
	stack_out->size -= 1;
}
