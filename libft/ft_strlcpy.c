/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:59:39 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/07 17:33:41 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while (src[cont] != '\0')
		cont++;
	if (size < 1)
		return (cont);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (cont);
}
