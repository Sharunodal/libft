/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:09:11 by arissane          #+#    #+#             */
/*   Updated: 2024/05/03 10:26:40 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	int	fd;

	fd = open("file1.txt", O_RDWR);
	ft_putchar_fd('c', fd);
	ft_putchar_fd('e', fd);
	ft_putchar_fd('\n', fd);
	ft_putchar_fd('d', fd);
	close(fd);
	return (0);
}
