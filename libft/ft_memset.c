/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:37:41 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:16:49 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t n)
{
	unsigned int	t;
	unsigned char	*ptr;

	ptr = str;
	t = 0;
	while (t < n)
	{
		ptr[t] = x;
		t++;
	}
	return (ptr);
}
