/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 18:09:28 by ngregori          #+#    #+#             */
/*   Updated: 2021/02/01 00:16:59 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_cat(int argc, char *argv[])
{
	int		fd;
	int		i;
	char	c;

	i = 1;
	while (i < argc)
	{
		if ((fd = open(argv[i], O_RDONLY) == -1))
			ft_putstr(strerror(errno));
		else
		{
			while (read(fd, &c, 1))
				write(1, &c, 1);
		}
		i++;
	}
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc < 2)
		write(1, "At least 2 arguments needed", 28);
	else
		ft_cat(argc, argv);
	return (0);
}
