/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:07:48 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 11:23:19 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	c2;

	a = 0;
	c2 = (char) c;
	while (s[a] != '\0')
	{
		if (s[a] == c2)
			return ((char *) &s[a]);
		a++;
	}
	if (s[a] == c2)
		return ((char *) &s[a]);
	return (NULL);
}

int	main(void)
{
	char	*str;

	str = "test string";
	printf("%s", ft_strchr(str, 'n'));
	return (0);
}
