/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:20:39 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/27 17:53:51 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{	
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}	
}
