/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:58:45 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:17:49 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char) c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
