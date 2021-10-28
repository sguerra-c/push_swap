/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:25:21 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:22:41 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (((unsigned char) str1[i]) != ((unsigned char) str2[i]))
			return (((unsigned char) str1[i]) - ((unsigned char)str2[i]));
		i++;
	}
	return (0);
}
