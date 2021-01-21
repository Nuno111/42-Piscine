/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:58:16 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/21 11:58:18 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_get_length(int size, char **strs, char *sep)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	result += (size - 1) * ft_strlen(sep) + 1;
	return (result);
}

char	*ft_strcat(char *dest, char *src, char *sep, int index)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (sep[j] != '\0' && index != 0)
	{
		dest[i] = sep[j];
		i++;
		j++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*newstr;

	i = 0;
	if (size == 1)
		return (*strs);
	if (size == 0)
	{
		newstr = malloc(1);
		return (newstr);
	}
	newstr = malloc(ft_get_length(size, strs, sep));
	if (newstr == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(newstr, strs[i], sep, i);
		i++;
	}
	return (newstr);
}
