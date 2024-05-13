/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:19:50 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 11:29:55 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*str;

	a = 0;
	str = malloc(sizeof(char) * (strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}

int	main(void)
{
	char	*str;

	str = ft_strdup("string");
	printf("%s", str);
	free(str);
	return (0);
}
