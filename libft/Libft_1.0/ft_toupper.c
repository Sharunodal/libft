/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 08:25:50 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 12:34:15 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	main(void)
{
	char	str[] = "sentence 12345:.";
	int		a;
	int		b;

	a = 0;
	printf("%s\n", str);
	while (str[a])
	{
		b = str[a];
		str[a] = ft_toupper(b);
		a++;
	}
	printf("%s", str);
	return (0);
}
