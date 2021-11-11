/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_both.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:09:36 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/09 18:15:03 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>

void	swap_both(t_stack *stack_a, t_stack *stack_b)
{
	t_element	*element1a;
	t_element	*element2a;
	t_element	*element1b;
	t_element	*element2b;

	element1a = stack_a->first;
	element2a = element1a->next;
	element1a->next = element2a->next;
	element1a->prev = element2a;
	element2a->next = element1a;
	element2a->prev = NULL;
	stack_a->first = element2a;
	element1b = stack_b->first;
	element2b = element1b->next;
	element1b->next = element2b->next;
	element1b->prev = element2b;
	element2b->next = element1b;
	element2b->prev = NULL;
	stack_b->first = element2b;
	write(1, "ss\n", 3);
}
