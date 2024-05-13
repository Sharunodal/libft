/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:23:49 by arissane          #+#    #+#             */
/*   Updated: 2024/05/03 09:11:36 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	dstlen;
	size_t	srclen;

	a = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > dstsize)
		return (dstsize + srclen);
	if (dstsize != 0 && dstlen < dstsize)
	{
		while (a < dstsize - dstlen - 1 && src[a] != '\0')
		{
			dst[dstlen + a] = src[a];
			a++;
		}
		dst[dstlen + a] = '\0';
	}
	return (dstlen + srclen);
}

int	main(void)
{
	char	dst[20] = "test ";
	char	dst2[20] = "test ";
	char	*src;

	src = "string";
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, 7));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, src, 7));
	printf("%s\n", dst);
	return (0);
}
