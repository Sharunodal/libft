/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:31:02 by arissane          #+#    #+#             */
/*   Updated: 2024/05/02 09:43:07 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
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
		b = ft_isdigit(str[a]) + 48;
		write(1, &b, 1);
		a++;
	}
	return (0);
}
