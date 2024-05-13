/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:04:10 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 10:19:12 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	a;

	if (count > 4294967295)
		return (NULL);
	a = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (a < count * size)
	{
		ptr[a] = 0;
		a++;
	}
	return (ptr);
}

int	main(void)
{
	char	*str;
	int		len;
	int		a;

	a = 0;
	len = 7;
	str = ft_calloc(sizeof(char), len);
	str = "string";
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
