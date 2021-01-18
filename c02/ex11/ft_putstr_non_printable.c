/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:49:40 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/18 11:52:01 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int nbr)
{
	char *hex;

	hex = "0123456789abcdef";
	if (nbr >= 16)
	{
		print_hex(nbr / 16);
		print_hex(nbr % 16);
	}
	else
	{
		write(1, &hex[nbr], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || str[i] == 127)
		{
			write(1, "\\0", 2);
			print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
