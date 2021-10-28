/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:38:08 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/23 10:50:03 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	iset;
	unsigned int	j;

	if (!s1)
		return (NULL);
	i = 0;
	iset = -1;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(s1));
	while (set[++iset] != '\0')
	{
		if ((s1[i] == set[iset]) || (s1[j] == set[iset]))
		{
			if (s1[i] == set[iset])
				i++;
			if (s1[j] == set[iset])
				j--;
			iset = -1;
			if (i > j)
				return (ft_substr(s1, i, 0));
		}
	}
	return (ft_substr(s1, i, (j - i + 1)));
}
