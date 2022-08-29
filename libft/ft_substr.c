/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:00:55 by llopez-a          #+#    #+#             */
/*   Updated: 2022/03/15 15:59:46 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s))
		s2 = (char *)malloc(sizeof(char) * 1);
	else if (len > ft_strlen(s) - start)
		s2 = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (0);
	i = start;
	j = 0;
	if (start < ft_strlen(s))
	{
		while (s[i] && i < start + len)
		{
			s2[j] = s[i];
			j++;
			i++;
		}
	}
	s2[j] = '\0';
	return (s2);
}
