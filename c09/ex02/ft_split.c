/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:04:18 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/29 19:04:18 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calc_sep(char *str, char *charset)
{
	size_t i;
	size_t j;

	while (str[i])
	{
		if (str[i] == charset[j])
		{
			while (str[i + j] == charset[j] && charset[j] != '\0')
			{

			}
		}
	}

}
char	**ft_split(char *str, char *charset)
{
	char **arr;
	size_t i;
	size_t length;

	length = ft_calc_sep(str, charset);
	arr = malloc(sizeof(char) * length);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < length)
	{
		arr[i] = 
	}

}