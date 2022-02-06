/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:21:37 by kenaubry          #+#    #+#             */
/*   Updated: 2021/11/27 18:21:39 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_trimable(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	trim_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (is_trimable(set, s1[i]) == 1)
		i++;
	return (i);
}

static int	trim_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (is_trimable (set, s1[i]) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*dest;
	long int	start;
	long int	end;
	int			i;

	i = 0;
	start = trim_start(s1, set);
	if (start == (long int)ft_strlen(s1))
		return (ft_strdup(""));
	end = trim_end(s1, set);
	dest = (char *)malloc(sizeof(char) * (end - start + 2));
	if (dest == NULL)
		return (NULL);
	while (start <= end)
	{
		dest[i] = s1[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
