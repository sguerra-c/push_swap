/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:31:14 by sguerra-          #+#    #+#             */
/*   Updated: 2021/04/27 19:28:32 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*list;

	list = NULL;
	if (lst && f)
	{
		while (lst)
		{
			new_element = ft_lstnew(f(lst->content));
			if (!new_element)
			{
				ft_lstclear(&list, del);
				return (NULL);
			}
			ft_lstadd_back(&list, new_element);
			lst = lst->next;
		}
		return (list);
	}
	return (NULL);
}
