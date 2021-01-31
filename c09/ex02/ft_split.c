/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:04:18 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/31 02:53:11 by ngregori         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
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

size_t		ft_calc_sepp(char *str, char *charset, size_t *str_index)
{
	size_t	i;
	size_t	count;
	int		aftersep;

	count = 0;
	i = 0;
	aftersep = 0;
	while (str[i])
	{
		if (ft_strstr(&str[i], charset) && aftersep)
		{
			count++;
			i += ft_strlen(charset);
			*str_index += i;
		}
		else if (ft_strstr(&str[i], charset))
		{
			aftersep = 1;
			i += ft_strlen(charset);
		}
		else
			i++;
	}
	return (count);
}

size_t	ft_get_length(char *str, char *charset, size_t str_index)
{
	size_t j;
	size_t length;

	length = 0;
	while (str[str_index])
	{
		j = 0;
		if (str[str_index] == charset[j])
		{
			while (str[str_index + j] == charset[j] && charset[j] != '\0')
				j++;
			if (charset[j] == '\0')
					return (length);
		}
		str_index++;
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
	arr_length = ft_calc_sepp(str, charset, &str_index);
	if (!(arr = malloc(sizeof(char *) * ((arr_length + 1)))))
		return (NULL);
	i = 0;
	while (i < arr_length)
	{
		str_length = ft_get_length(str, charset, str_index);
		if (!(arr[i] = malloc(sizeof(char) * str_length + 1)))
			return (NULL);
		ft_strlcpy(arr[i], &str[str_index], str_length + 1);
		str_index += str_length + ft_strlen(charset);
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
	arr = ft_split("abcabcabcabcabcabbcabc", "abc");
	while(arr[i] != 0)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
