/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:33:13 by llopez-a          #+#    #+#             */
/*   Updated: 2022/02/14 16:49:54 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int n);
static char	*fill(char *str, int n);

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = lenght(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (0);
	return (fill(str, n));
}

static char	*fill(char *str, int n)
{
	int	len;
	int	sign;

	len = lenght(n);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}

static int	lenght(int n)
{
	int	count;
	int	sign;

	count = 1;
	sign = 0;
	if (n < 0)
	{
		sign++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count + sign);
}
