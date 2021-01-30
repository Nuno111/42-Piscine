/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:04:18 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/30 23:37:53 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t length;

	length = ft_strlen(src);
	if (!dst || !src || !size)
		return (length);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}

size_t		ft_calc_sep(char *str, char *charset, size_t *str_index)
{
	size_t 	i;
	size_t 	j;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == charset[j])
		{
			while (str[i + j] == charset[j] && charset[j] != '\0')
				j++;
			if (charset[j] == '\0')
			{
				if (count == 0)
					*str_index = i + j;
				count++;
			}
		}
		i++;
	}
	return (count - 1);
}

size_t	ft_get_length(char *str, char *charset, size_t *str_index)
{
	size_t j;
	size_t length;

	length = 0;
	while (str[*str_index])
	{
		j = 0;
		if (str[*str_index] == charset[j])
		{
			while (str[*str_index + j] == charset[j])
				j++;
			if (charset[j] == '\0')
				{
					*str_index += j;
					return (length);
				}
		}
		*str_index += 1;
		length++;
	}
	return (length);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	size_t	i;
	size_t	arr_length;
	size_t	str_index;
	size_t	str_length;

	str_index = 0;
	arr_length = ft_calc_sep(str, charset, &str_index);
	if (!(arr = malloc(sizeof(char *) * ((arr_length + 1)))))
		return (NULL);
	i = 0;
	while (i < arr_length)
	{
		str_length = ft_get_length(str, charset, &str_index);
		if (!(arr[i] = malloc(sizeof(char) * str_length + 1)))
			return (NULL);
		ft_strlcpy(arr[i], &str[str_index - str_length - ft_strlen(charset)], str_length + 1);
		i++;
	}
	arr[i] = 0;
	return (arr);
}

int main(void)
{
	char **arr;
	int i;

	i = 0;
	arr = ft_split(",,,,aaaaa,,,,aabb,,,,cds,,,,", ",,,,");
	while(arr[i] != 0)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
