/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:54:09 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/23 10:50:59 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	i;

	ptr = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
