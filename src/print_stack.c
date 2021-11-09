/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:10:29 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/09 17:01:18 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *stack_a, t_stack *stack_b)
{
	t_element *element_a;
	t_element *element_b;

	element_a = stack_a->first;
	element_b = stack_b->first;
	printf("_\t\t\t_\n");
	while (element_a || element_b)
	{
		if (!element_a)
			printf(" ");
		else
		{
			printf("%d", element_a->num);
			element_a = element_a->next;
		}
		if (!element_b)
			printf("\t\t\t\n");
		else
		{
			printf("\t\t\t%d\n", element_b->num);
			element_b = element_b->next;
		}
	}
	printf("_\t\t\t_\n");
	printf("a\t\t\tb\n");
	printf("**************************\n");
}
