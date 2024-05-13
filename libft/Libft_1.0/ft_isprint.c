/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:48:17 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 09:49:25 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int		b;

	b = ft_isprint(30) + 48;
	write(1, &b, 1);
	b = ft_isprint('F') + 48;
	write(1, &b, 1);
	b = ft_isprint(':') + 48;
	write(1, &b, 1);
	b = ft_isprint(21) + 48;
	write(1, &b, 1);
	return (0);
}
