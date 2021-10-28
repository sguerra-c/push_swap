/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:40:42 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/29 13:37:21 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	index1;
	size_t	index2;

	index1 = 0;
	index2 = ft_strlen(dest);
	if (n == 0)
		return (ft_strlen(src));
	while ((src[index1] != '\0') && ((index2 + index1) < (n - 1)))
	{
		dest[index2 + index1] = src[index1];
		index1++;
	}
	dest[index2 + index1] = '\0';
	if (n > index2)
		return (index2 + ft_strlen(src));
	return (n + ft_strlen(src));
}
