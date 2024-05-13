/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:43:16 by arissane          #+#    #+#             */
/*   Updated: 2024/05/03 08:57:02 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if ((unsigned char) s1[a] != (unsigned char) s2[a])
			return ((unsigned char) s1[a] - (unsigned char) s2[a]);
		a++;
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "string";
	s2 = "strink";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s2, 7));
	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d", strncmp(s1, s2, 7));
	return (0);
}
