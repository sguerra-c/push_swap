/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:00:55 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/06 15:13:46 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_element *first_element;
	t_element *last_element;
	
	if (stack->first)
	{
		first_element = stack->first;
		last_element = stack->last;
		stack->first = first_element->next;
		stack->last = first_element;
		first_element->next->prev = NULL;
		first_element->prev = last_element;
		last_element->next = first_element;
		first_element->next = NULL;
	if (stack->name == 'a')
		write(1, "ra\n", 3);
	if (stack->name == 'b')
		write(1, "rb\n", 3);
	}
}
