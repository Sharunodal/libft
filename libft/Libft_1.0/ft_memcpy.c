/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:39:18 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 10:47:40 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*sorc;
	size_t	a;

	if (!dst && !src)
		return (dst);
	dest = (char *)dst;
	sorc = (char *)src;
	a = 0;
	while (a < n)
	{
		dest[a] = sorc[a];
		a++;
	}
	return (dst);
}

int	main(void)
{
	char	dst[20] = "testing";
	char	*src;
	char	dst2[20] = "testing";
	char	*src2;

	src = dst;
	src2 = dst2;
	printf("before:\n%s\n", dst);
	printf("%s\n\n", src);
	printf("after ft_memcpy at dst + 4:\n%s\n", ft_memcpy(dst + 4, src, 7));
	printf("%s\n\n", dst);
	printf("after real memcpy at dst + 4:\n%s\n", memcpy(dst2 + 4, src2, 7));
	printf("%s\n", dst2);
	return (0);
}
