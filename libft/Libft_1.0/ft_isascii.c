/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:41:14 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 09:40:44 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	*str;
	int		a;
	int		b;

	str = "aå1.;Ä";
	a = 0;
	while (str[a])
	{
		b = ft_isascii(str[a]) + 48;
		write(1, &b, 1);
		a++;
	}
//characters outside ascii range don't fit inside a char, so there will be double zeroes
	return (0);
}
