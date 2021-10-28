/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:02:13 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/26 16:31:26 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		t;
	char	**tab;
	int		split;

	i = -1;
	split = 0;
	while (s && s[++i] != 0)
		if ((s[i] != c && (i + 1 == (int)ft_strlen(s) || s[i + 1] == c)))
			split++;
	tab = ft_calloc(split + 1, sizeof(char **));
	if (!tab || !s)
		return (NULL);
	t = split;
	split = i - 1;
	if (i == 1 && s[0] != c)
		tab[0] = ft_substr(s, 0, 1);
	while (--i > 0)
	{
		if (s[i - 1] != c && s[i] == c)
			split = i - 1;
		if ((s[i - 1] == c && s[i] != c) || (i == 1 && s[--i] != c))
			tab[--t] = ft_substr(s, i, split - i + 1);
	}
	return (tab);
}
