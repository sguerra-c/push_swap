/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:04:21 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/09 18:12:18 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_element *element1;
	t_element *element2;

	element1 = stack->first;
	element2 = element1->next;
	element1->next = element2->next;
	element1->next->prev = element1;
	element1->prev = element2;
	element2->next = element1;
	element2->prev = NULL;
	stack->first = element2;
	if (stack->name == 'a')
		write(1, "sa\n", 3);
	else
		write(1, "sb\n", 3);
}
