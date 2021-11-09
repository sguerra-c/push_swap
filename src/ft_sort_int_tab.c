/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:19:27 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/09 15:21:27 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int counter;
	int i;

	counter = 0;
	size--;
	while (counter < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[(i + 1)])
			{
				temp = tab[i];
				tab[i] = tab[(i + 1)];
				tab[(i + 1)] = temp;
			}
			i++;
		}
		counter++;
	}
}
