/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:15:24 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/06 13:59:51 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	t_element *first_element_a;
	t_element *last_element_a;
	t_element *first_element_b;
	t_element *last_element_b;

	if (!stack_a->first || !stack_b->first)
		return ;
	first_element_a = stack_a->first;
	last_element_a = stack_a->last;
	stack_a->first = first_element_a->next;
	stack_a->last = first_element_a;
	first_element_a->next->prev = NULL;
	first_element_a->prev = last_element_a;
	last_element_a->next = first_element_a;
	first_element_a->next = NULL;
	first_element_b = stack_b->first;
	last_element_b = stack_b->last;
	stack_b->first = first_element_b->next;
	stack_b->last = first_element_b;
	first_element_b->next->prev = NULL;
	first_element_b->prev = last_element_b;
	last_element_b->next = first_element_b;
	first_element_b->next = NULL;
	write(1, "rr\n", 3);
}
