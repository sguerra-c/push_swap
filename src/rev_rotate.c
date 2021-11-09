/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:00:31 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/07 15:15:14 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack *stack)
{
	t_element	*first_element;
	t_element	*last_element;

	if (stack->first != stack->last)
	{
		first_element = stack->first;
		last_element = stack->last;
		stack->first = last_element;
		stack->last = last_element->prev;
		first_element->prev = last_element;
		last_element->prev->next = NULL;
		last_element->prev = NULL;
		last_element->next = first_element;
		if (stack->name == 'a')
			write(1, "rra\n", 4);
		else
			write(1, "rrb\n", 4);
	}
}
