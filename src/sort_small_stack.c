/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:48:34 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/05 12:27:03 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort_stack_size_3(t_stack *a)
{
	if (a->first->num == a->min && a->last->num != a->max)
	{
		swap(a);
	 	rotate(a);
	}
	else if (a->first->num == a->max && a->last->num == a->min)
	{
		swap(a);
		rev_rotate(a);
	}
	else if (a->last->num == a->min)
		rev_rotate(a);
	else
		swap(a);
}

i/*void sort_stack(t_stack *a, t_stack *b)
{
	while (check_sort(a) == 0)
	{
		if (a->first->num != a->min
	}
}*/

void	sort_small_stack(t_stack *a, t_stack *b)
{
	t_element *element;

	element = a->first;
	if (a->size == 2 && a->first->num > a->first->next->num)
		rotate(a);
	else if (a->size == 3)
		sort_stack_size_3(a);
	/*else
		sort_stack(a, b);*/
	printf("b == %d\n", b->size);
}	
