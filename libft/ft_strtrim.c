/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:12:54 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/09 19:48:10 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cad;
	int		i;
	int		a;
	int		z;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	a = i - 1;
	while (len > a && ft_strchr(set, s1[len]))
		len--;
	z = len + 1;
	cad = (char *)malloc(sizeof(char) * z - a);
	if (cad == NULL)
		return (0);
	ft_strlcpy(cad, s1 + a + 1, z - a);
	return (cad);
}
