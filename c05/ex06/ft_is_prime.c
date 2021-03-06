/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:24:52 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/20 16:25:51 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int divisor;

	if (nb <= 1)
		return (0);
	divisor = 2;
	while (divisor <= nb / 2)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}
