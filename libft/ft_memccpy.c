/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:38:55 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:12:45 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	int					i;

	s = src;
	d = dest;
	i = 0;
	while (n--)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char) c)
			return (dest + i + 1);
		i++;
	}
	dest = d;
	return (0);
}
