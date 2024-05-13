/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:17:22 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 09:03:12 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	a;

	str = (char *) s;
	a = 0;
	while (a < n)
	{
		str[a] = 0;
		a++;
	}
}

int	main(void)
{
	char	str[5] = "test";
	int		len;
	int		a;

	len = 5;
	a = 0;
	while (a < len)
	{
		if (str[a] == '\0')
			write(1, "(null)", 6);
		if (str[a])
			write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
	a = 0;
	ft_bzero(str, 3);
	while (a < len)
	{
		if (str[a] == '\0')
			write(1, "(null)", 6);
		if (str[a])
			write(1, &str[a], 1);
		a++;
	}
	return (0);
}
