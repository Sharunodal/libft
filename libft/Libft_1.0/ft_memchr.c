/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:28:00 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 10:00:38 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*str;
	unsigned char	c2;

	a = 0;
	str = (unsigned char *) s;
	c2 = (unsigned char) c;
	while (a < n)
	{
		if (str[a] == c2)
			return ((void *) &s[a]);
		a++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str;
	int		a;

	str = "test string";
	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
	a = 0;
	str = ft_memchr(str, 's', 6);
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
	return(0);
}
