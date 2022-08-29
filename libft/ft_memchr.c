/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:46:29 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/03 20:58:24 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*p;

	p = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		else
		{
			i++;
			n--;
		}
	}
	return (0);
}
