/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 20:53:47 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/20 21:39:26 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int length;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	length = max - min;
	*range = malloc(length * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < length)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (length);
}
