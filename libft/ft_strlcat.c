/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:53:16 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/07 17:51:45 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	i;

	a = ft_strlen(src);
	b = ft_strlen(dst);
	i = 0;
	while (size > (b + i + 1) && src[i] != '\0')
	{
		dst[b + i] = src[i];
		i++;
	}
	dst[b + i] = '\0';
	if (size < b)
		return (a + size);
	else
		return (a + b);
}
