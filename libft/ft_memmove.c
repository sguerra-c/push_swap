/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:41:46 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:15:42 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int			i;
	char		*s1;
	const char	*s2;

	i = 0;
	s2 = str2;
	s1 = str1;
	if (str1 == 0 && str2 == 0)
		return (NULL);
	if (s2 > s1)
		ft_memcpy(s1, s2, n);
	else
		while (n--)
			*((unsigned char *) s1 + n) = *((unsigned char *) s2 + n);
	return (str1);
}
