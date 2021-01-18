/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 18:01:41 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/10 09:55:22 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_many(char a, char b, char c, char d)
{
	ft_put_char(a);
	ft_put_char(b);
	ft_put_char(' ');
	ft_put_char(c);
	ft_put_char(d);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		ft_put_char(',');
		ft_put_char(' ');
	}
}

void	ft_print_comb2(void)
{
	char array[4];

	array[0] = '/';
	array[1] = '/';
	array[2] = '/';
	array[3] = '0';
	while (array[0]++ <= '8')
	{
		while (array[1]++ <= '8')
		{
			while (array[2]++ <= '8')
			{
				while (array[3]++ <= '8')
				{
					ft_print_many(array[0], array[1], array[2], array[3]);
				}
				array[3] = '/';
			}
			array[2] = array[0] - 1;
			array[3] = array[1] + 1;
		}
		array[1] = '/';
		array[2] = array[0];
		array[3] = array[1] + 1;
	}
}
