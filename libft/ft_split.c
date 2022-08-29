/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:51:35 by llopez-a          #+#    #+#             */
/*   Updated: 2022/03/15 15:26:03 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**indice;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	indice = (char **)ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!indice)
		return (0);
	while (s[i] && j < (int)word_count(s, c))
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			len = 1;
			while (s[i + len] != c && s[i + len])
				len++;
			indice[j] = ft_substr(s, i, len);
			j++;
		}
		i++;
	}
	return (indice);
}

static size_t	word_count(char const *s, char c)
{
	int		i;
	size_t	count;	

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && ((s[i + 1] == c) || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}
