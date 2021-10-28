/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:21:18 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 13:37:24 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{	
		ptr = ft_calloc(2, sizeof(char));
		return (ptr);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr || !s)
		return (ptr);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}
