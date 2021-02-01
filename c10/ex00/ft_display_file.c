/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 13:50:53 by ngregori          #+#    #+#             */
/*   Updated: 2021/02/01 00:17:33 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(char *file)
{
	int		fd;
	char	c;

	c = 0;
	if ((fd = open(file, O_RDONLY) == -1))
		write(1, "Cannot read file\n", 18);
	else
	{
		while (read(fd, &c, 1) != 0)
			write(1, &c, 1);
	}
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "File Name Missing.\n", 20);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 21);
	else
		ft_display_file(argv[1]);
	return (0);
}
