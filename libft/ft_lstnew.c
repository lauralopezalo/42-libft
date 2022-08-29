/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:35:16 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/16 18:02:09 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*box;

	box = (t_list *)malloc(sizeof(t_list));
	if (box == NULL)
		return (0);
	box->content = content;
	box->next = NULL;
	return (box);
}
