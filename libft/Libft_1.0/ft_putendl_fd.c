/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:16:52 by arissane          #+#    #+#             */
/*   Updated: 2024/05/03 10:21:48 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		write(fd, &s[a], 1);
		a++;
	}
	write(fd, "\n", 1);
}

int	main(void)
{
	int	fd;

	fd = open("file1.txt", O_RDWR);
	ft_putendl_fd("string", fd);
	ft_putendl_fd("string2", fd);
	close(fd);
	return (0);
}
