/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 09:58:41 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/18 09:59:18 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp[size];

	i = 0;
	while (i < size)
	{
		temp[i] = tab[i];
		i++;
	}
	while (i > 0)
	{
		*(tab + i - 1) = temp[size - i];
		i--;
	}
}
