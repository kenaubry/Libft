/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:18:02 by kenaubry          #+#    #+#             */
/*   Updated: 2021/11/27 18:18:04 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd)
	{
		while (*s)
			ft_putchar_fd(*s++, fd);
		ft_putchar_fd('\n', fd);
	}
}
