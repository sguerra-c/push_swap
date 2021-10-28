/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:37:29 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/22 12:06:14 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num != 0)
			num *= 10;
		num = num + str[i] - 48;
		i++;
	}
	if (num > 9223372036854775807 && sign > 0)
		return (-1);
	if (num - 1 > 9223372036854775807 && sign < 0)
		return (0);
	return (num * sign);
}
