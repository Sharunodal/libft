/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:14:43 by arissane          #+#    #+#             */
/*   Updated: 2024/05/03 09:53:18 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	numbers(unsigned int i, char *str)
{
	if (str)
		*str = i + 48;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	a;

	a = 0;
	while (s[a] != 0)
	{
		f(a, &s[a]);
		a++;
	}
}

int	main(void)
{
	char	str[20] = "string";

	printf("%s\n", str);
	ft_striteri(str, numbers);
	printf("%s", str);
	return (0);
}
