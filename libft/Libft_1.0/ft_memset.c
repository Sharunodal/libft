/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:15 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 09:02:24 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	copy;
	size_t			a;

	str = (unsigned char *) b;
	copy = (unsigned char) c;
	a = 0;
	while (a < len)
	{
		str[a] = copy;
		a++;
	}
	return (b);
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
	ft_memset(str, 'a', 4);
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
