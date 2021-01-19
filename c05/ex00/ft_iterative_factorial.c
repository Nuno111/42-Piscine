/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 21:25:04 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/19 21:42:26 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;

	if (nb == 0 || nb == 1)
		return (1);
    if (nb < 0)
        return (0);
    i = nb;
    while (--i > 0)
        nb *= i;

    return nb;
}

int main(void)
{
	int b = ft_iterative_factorial(10);
	printf("%d", b);
}
