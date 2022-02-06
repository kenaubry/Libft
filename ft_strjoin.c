/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:20:03 by kenaubry          #+#    #+#             */
/*   Updated: 2021/11/27 18:20:06 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		len_s1;
	int		len_s2;
	int		size;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	size = len_s1 + len_s2;
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	while (i < len_s1)
		dest[i++] = *s1++;
	while (i < size)
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}
