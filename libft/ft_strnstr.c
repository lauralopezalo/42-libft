/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:54:16 by llopez-a          #+#    #+#             */
/*   Updated: 2022/03/07 14:02:18 by llopez-a         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *cadena, const char *subcadena, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = ft_strlen(subcadena);
	if (subcadena[0] == '\0')
		return ((char *)cadena);
	while (cadena[i] != '\0' && (i <= n - k) && n > 0 && k <= n)
	{
		j = 0;
		if (cadena[i] == subcadena[j])
		{
			while (cadena[i + j] && cadena[i + j] == subcadena[j] && j < k)
				j++;
			if (k == j)
				return ((char *)&cadena[i]);
		}
		i++;
	}
	return (0);
}
