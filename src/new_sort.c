/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:18:41 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/09 18:02:08 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void new_sort(t_stack *a)
{
    t_stack *b;
    int sort_list[a->size];
	int i;
	t_element *element;
	
	i = 0;
    b = malloc(5 * sizeof(t_stack));
	b->size = 0;
	element = a->first;
	while (element)
	{
		sort_list[i] = element->num;
		element = element->next;
		i++;
	}
	ft_sort_int_tab(sort_list, a->size);
    if (a->size > 3)
    {
        i = a->size / 2;
        move(a, b, sort_list[i]);
        new_sort(a);
    }
    else
        sort_small_stack(a);
    //new_sort_rev(b, a);
	print_stack(a, b);
	free(b);
}
