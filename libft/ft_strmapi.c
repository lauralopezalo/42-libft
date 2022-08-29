/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:05:04 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/14 21:16:09 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	if (!s || !f)
		return (0);
	s2 = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	return (s2);
}
