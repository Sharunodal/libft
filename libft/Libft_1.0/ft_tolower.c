/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:49:10 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 12:35:54 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	main(void)
{
	char	str[] = "SENTENCE 12345:.";
	int		a;
	int		b;

	a = 0;
	printf("%s\n", str);
	while (str[a])
	{
		b = str[a];
		str[a] = ft_tolower(b);
		a++;
	}
	printf("%s", str);
	return (0);
}
