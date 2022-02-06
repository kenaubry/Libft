/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:27:49 by kenaubry          #+#    #+#             */
/*   Updated: 2021/11/27 18:27:50 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_word(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -1 * n;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;

	i = len_word(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	dest[len_word(n)] = '\0';
	if (n < 0)
	{
		dest[0] = '-';
		n = n * -1;
	}
	i--;
	while (n > 9)
	{
		dest[i--] = (n % 10) + 48;
		n = n / 10;
	}
	dest[i] = n + 48;
	return (dest);
}
