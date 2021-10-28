/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:47:23 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:26:10 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	n2;
	unsigned int	n3;
	int				i;

	n2 = n;
	i = 1;
	if (n < 0 && i++)
		n2 *= -1;
	n3 = n2;
	while ((++i) && (n2 > 9))
		n2 /= 10;
	str = ft_calloc(i--, sizeof(char));
	if (!str)
		return (NULL);
	if (!n)
		str[i] = '\0';
	while (i > 0 && n3 > 9)
	{	
		str[--i] = n3 % 10 + 48;
		n3 /= 10;
	}
	str[0] = '-';
	str[--i] = n3 + 48;
	return (str);
}
