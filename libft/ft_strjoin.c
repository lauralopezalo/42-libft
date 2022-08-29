/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:15:46 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/09 14:05:10 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cadena;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	cadena = (char *)malloc(sizeof(char) * (size + 1));
	if (cadena == NULL)
		return (0);
	ft_strlcpy(cadena, s1, ft_strlen(s1) + 1);
	ft_strlcat(cadena, s2, size + 1);
	return (cadena);
}
