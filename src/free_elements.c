/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:16:37 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/05 18:03:41 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_elements(t_stack *stack, t_element *first_element)
{
	while (stack->size != 0)
	{
		stack->first = first_element->next;
		free(first_element);
		first_element = stack->first;
		stack->size--;
	}
}
