/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:46:03 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/16 16:34:06 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;
	int			i;
	char		c2;

	i = 0;
	c2 = c;
	s = str;
	while (n--)
	{
		if (s[i] == c2)
			return ((char *) s + i);
		i++;
	}
	return (NULL);
}
