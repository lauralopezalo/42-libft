/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:55:25 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/03 20:58:51 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ustr1;
	unsigned char	*ustr2;
	size_t			i;

	ustr1 = (unsigned char *)str1;
	ustr2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (ustr1[i] == ustr2[i])
			i++;
		else
			return (ustr1[i] - ustr2[i]);
	}
	return (0);
}
