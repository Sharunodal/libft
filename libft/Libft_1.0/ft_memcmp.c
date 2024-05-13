/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:42:55 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 10:08:02 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			a;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	a = 0;
	while (a < n)
	{
		if (str1[a] != str2[a])
			return (str1[a] - str2[a]);
		a++;
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "string";
	s2 = "strong";
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s1, s2, 4));
	printf("%d\n", memcmp(s1, s2, 3));
	printf("%d", memcmp(s1, s2, 4));
	return (0);
}
