/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 18:09:28 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/31 19:28:48 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_cat(int argc, char *argv[])
{
	int		fd;
	int		i;
	char	c;

	i = 1;
	while (i < argc)
	{
		if (!(fd = open(argv[i], O_RDONLY)))
			write(1, "Cannot read file.", 18);
		else
		{
			while (read(fd, &c, 1))
				write(1, &c, 1);
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc < 2)
		write(1, "At least 2 arguments needed", 28);
	else
		ft_cat(argc, argv);
	return (0);
}
