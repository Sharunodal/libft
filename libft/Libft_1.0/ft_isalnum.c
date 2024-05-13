/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:33:57 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 09:25:10 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	else
		return (0);
}

int	main(void)
{
	char	*str;
	int		a;
	int		b;

	str = "a1H9B.;?";
	a = 0;
	while (str[a])
	{
		b = ft_isalnum(str[a]) + 48;
		write(1, &b, 1);
		a++;
	}
	return (0);
}
