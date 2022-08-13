/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:08:54 by mbardett          #+#    #+#             */
/*   Updated: 2022/02/04 13:09:00 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_link;

	new_list = NULL;
	while (lst)
	{
		new_link = ft_lstnew(f(lst->content));
		if (!new_link)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new_link);
	}
	return (new_list);
}
