/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:52:19 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/03 20:59:27 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dst2;

	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	i = 0;
	if (dst == src || !n)
		return (dst);
	if (dst2 > src2)
	{
		while (n > 0)
		{
			dst2[n - 1] = src2[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
