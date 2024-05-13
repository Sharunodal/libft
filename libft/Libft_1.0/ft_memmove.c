/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:22:26 by arissane          #+#    #+#             */
/*   Updated: 2024/05/08 13:27:26 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	copystr(char *dest, char *sorc, size_t len)
{
	size_t	a;

	a = 0;
	while (a < len)
	{
		dest[a] = sorc[a];
		a++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sorc;

	if ((!dst && !src) || dst == src)
		return (dst);
	dest = (char *)dst;
	sorc = (char *)src;
	if (dest > sorc)
	{
		while (len > 0)
		{
			dest[len - 1] = sorc[len - 1];
			len--;
		}
	}
	else
		copystr(dest, sorc, len);
	return (dst);
}

int	main(void)
{
	char	dst[20] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	char	*src;
	char	dst2[20] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	char	*src2;

	src = dst;
	src2 = dst2;
	printf("before:\n%s\n", dst);
	printf("%s\n\n", src);
	printf("after ft_memmove at dst + 4:\n%s\n", ft_memmove(&dst[5], &dst[3], 7));
	printf("%s\n\n", dst);
	printf("after real memmove at dst + 4:\n%s\n", memmove(&dst2[5], &dst2[3], 7));
	printf("%s\n", dst2);
	return (0);
}
