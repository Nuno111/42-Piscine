/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 21:14:02 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/19 21:14:48 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int length;

	length = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / length, base);
		ft_putchar(base[nbr % length]);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else
	{
		if (nbr > length - 1)
			ft_putnbr_base(nbr / length, base);
		ft_putchar(base[nbr % length]);
	}
}
