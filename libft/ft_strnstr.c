/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:41:41 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:23:38 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	if (to_find[i1] == '\0')
		return ((char *) str);
	while (str[i1] != '\0')
	{
		i2 = 0;
		while (to_find[i2] == str[i1 + i2] && (i1 + i2) < n)
		{
			if (to_find[i2 + 1] == '\0')
				return ((char *) str + i1);
			i2++;
		}
		i1++;
	}
	return (NULL);
}
