/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:26:09 by arissane          #+#    #+#             */
/*   Updated: 2024/05/03 09:06:28 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (dstsize != 0)
	{
		while (src[a] != '\0' && a < dstsize - 1)
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	while (src[a] != '\0')
		a++;
	return (a);
}

int	main(void)
{
	char	dst[20] = "test ";
	char	dst2[20] = "test ";
	char	*src;

	src = "string";
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst, src, 7));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst2, src, 7));
	printf("%s\n", dst);
	return (0);
}
