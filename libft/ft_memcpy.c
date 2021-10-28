/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:20:40 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:14:09 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	int			i;

	if (dest == 0 && src == 0)
		return (0);
	if (n == 0)
		return (dest);
	i = 0;
	s = src;
	d = dest;
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	dest = d;
	return (dest);
}
