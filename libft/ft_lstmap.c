/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:37:33 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/18 00:12:00 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newbox;

	if (lst == NULL || f == NULL)
		return (0);
	newlist = NULL;
	while (lst)
	{
		newbox = ft_lstnew(f(lst->content));
		if (!newbox)
		{
			ft_lstclear(&newbox, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newbox);
		lst = lst->next;
	}
	return (newlist);
}
