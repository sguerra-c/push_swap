/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_end_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:29:30 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/29 17:20:34 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	add_end_stack(t_stack *stack, t_element *last_element, int number)
{
	t_element	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return (0);
	check_value(stack, number);
	element->num = number;
	element->prev = last_element;
	element->next = NULL;
	last_element->next = element;
	stack->last = element;
	if (number < stack->min)
		stack->min = number;
	if (number > stack->max)
		stack->max = number;
	stack->average += number;
	return (1);
}
