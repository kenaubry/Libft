/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:21:45 by kenaubry          #+#    #+#             */
/*   Updated: 2021/11/27 18:21:47 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length_dest(char const *s, unsigned int start, size_t len)
{
	int	len_dest;

	len_dest = 0;
	while (s[start] != '\0' && len > 0)
	{
		start++;
		len--;
		len_dest++;
	}
	return (len_dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		len_dest;
	char	*dest;
	int		i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	len_dest = length_dest(s, start, len);
	dest = (char *)malloc(sizeof(char) * len_dest + 1);
	if (!dest)
		return (NULL);
	while (i < len_dest)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
