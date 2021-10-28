/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_first_elem.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:37:06 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/26 17:14:57 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	insert_first_elem(t_stack *stack, int number)
{
	t_element *element;

	element = malloc(sizeof(*element));
	if (!element)
		return (0);
	element->num = number;
	element->next = NULL;
	element->prev = NULL;
	stack->first = element;
	stack->last = element;
	stack->min = number;
	stack->max = number;
	stack->average = number;
	return (1);
}
