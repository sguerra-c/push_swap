/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:48:34 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/26 17:10:50 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	//while (check_sort(stack_a) != 1)
	//{
		push(stack_b, stack_a);
		push(stack_b, stack_a);
		while (stack_a->size > 0)
		{
			if (stack_a->first->num > stack_b->first->num)
				while (stack_a->first->num > stack_b->last->num)
				{
					if (stack_b->first->num > stack_b->last->num)
						break ;
					rev_rotate(stack_b);
				}
			else
				while (stack_a->first->num < stack_b->first->num)
				{
					rotate(stack_b);
					if (stack_b->last->num < stack_b->first->num)
						break ;
				}
			push(stack_b, stack_a);
			//print_stack(stack_a, stack_b);
		}
		if (stack_a->max - stack_b->first->num < stack_a->max - stack_b->last->num)
			while (stack_b->first->num != stack_a->max)
				rev_rotate(stack_b);
		else
			while (stack_b->first->num != stack_a->max)
				rotate(stack_b);
		while (stack_b->size > 0)
			push(stack_a, stack_b);
	//}
	//printf("Está ordenado\n");
}	
