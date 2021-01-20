/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 19:13:35 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/20 20:59:00 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int length;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	length = max - min;
	arr = malloc(length * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < length)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
