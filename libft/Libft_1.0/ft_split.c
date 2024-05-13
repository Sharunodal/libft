/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:15:48 by arissane          #+#    #+#             */
/*   Updated: 2024/05/06 10:01:39 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	string_count(char const *s, char c)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		if (s[a] != c && (s[a + 1] == c || s[a + 1] == '\0'))
			b++;
		a++;
	}
	return (b);
}

void	free_all(char **array, char const *s, char c)
{
	size_t	x;

	x = string_count(s, c);
	while (x > 0)
	{
		free(array[x]);
		x--;
	}
}

void	add_strings(char **array, char const *s, char c, size_t x)
{
	size_t	a;
	size_t	b;
	size_t	d;

	a = 0;
	b = 0;
	d = 0;
	while (b < x)
	{
		while (s[a] == c && s[a] != '\0')
			a++;
		if (s[a] != c && s[a] != '\0')
		{
			while (s[a] != c && s[a] != '\0')
			{
				array[b][d] = s[a];
				d++;
				a++;
			}
			array[b][d] = '\0';
			d = 0;
		}
		b++;
	}
}

char	**allocation(char **array, char const *s, char c, size_t a)
{
	size_t	b;
	size_t	d;

	b = 0;
	d = 0;
	while (s[a] != 0)
	{
		if (s[a] != c && s[a] != '\0')
		{
			while (s[a + d] != c && s[a + d] != '\0')
				d++;
			a = a + d - 1;
			array[b] = malloc(sizeof(char) * (d + 1));
			if (!array[b])
			{
				free_all(array, s, c);
				return (0);
			}
			d = 0;
			b++;
		}
		a++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	x;
	size_t	a;

	a = 0;
	if (!s)
		return (0);
	x = string_count(s, c);
	array = malloc(sizeof(char *) * (x + 1));
	if (!array)
		return (0);
	else
	{
		array[x] = 0;
		array = allocation(array, s, c, a);
		add_strings(array, s, c, x);
	}
	return (array);
}

int	main(void)
{
	char	**array;
	char	*str;
	int		a;

	str = "this is definitely a string of characters";
	array = ft_split(str, ' ');
	a = 0;
	while (array[a])
	{
		printf("%s\n", array[a]);
		a++;
	}
	if (array[a] == NULL)
		printf("NULL");
	return (0);
}
