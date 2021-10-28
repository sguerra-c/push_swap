/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:31:33 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/06 15:42:46 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	t_element	*first_element_a;
	t_element	*last_element_a;
	t_element	*first_element_b;
	t_element	*last_element_b;

	if (!stack_a->first || !stack_b->first)
		return ;
	first_element_a = stack_a->first;
	last_element_a = stack_a->last;
	stack_a->first = last_element_a;
	stack_a->last = last_element_a->prev;
	first_element_a->prev = last_element_a;
	last_element_a->prev->next = NULL;
	last_element_a->prev = NULL;
	last_element_a->next = first_element_a;
	first_element_b = stack_b->first;
	last_element_b = stack_b->last;
	stack_b->first = last_element_b;
	stack_b->last = last_element_b->prev;
	first_element_b->prev = last_element_b;
	last_element_b->prev->next = NULL;
	last_element_b->prev = NULL;
	last_element_b->next = first_element_b;
	write(1, "rrr\n", 4);
}
