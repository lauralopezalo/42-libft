/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:51:45 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/03 20:59:44 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str2;

	str2 = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		str2[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
