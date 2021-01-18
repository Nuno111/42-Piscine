/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 18:00:51 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/07 18:01:04 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char answer;

	if (n < 0)
	{
		answer = 'N';
		write(1, &answer, 1);
	}
	else
	{
		answer = 'P';
		write(1, &answer, 1);
	}
}
