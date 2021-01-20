/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:44:39 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/20 16:44:48 by ngregori         ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	while ((ft_is_prime(nb)) != 1)
		nb++;
	return (nb);
}
