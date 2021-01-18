/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 18:01:41 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/07 19:53:41 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_many(char f, char s, char t)
{
	ft_put_char(f);
	ft_put_char(s);
	ft_put_char(t);
	if (f != '7' || s != '8' || t != '9')
	{
		ft_put_char(44);
		ft_put_char(32);
	}
}

void	ft_print_comb(void)
{
	char f;
	char s;
	char t;

	f = '0';
	while (f <= '9')
	{
		s = f + 1;
		while (s <= '9')
		{
			t = s + 1;
			while (t <= '9')
			{
				ft_print_many(f, s, t);
				t++;
			}
			s++;
		}
		f++;
	}
}
