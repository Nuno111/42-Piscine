/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:04:18 by ngregori          #+#    #+#             */
/*   Updated: 2021/02/02 16:34:29 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t length;

	if (!src)
		return (0);
	length = 0;
	while (src[length])
		length++;
	if (!dst || !size)
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

char		*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		i++;
	}
	if (s[i] == c)
		return (&((char *)s)[i]);
	return (NULL);
}

size_t		ft_count_words(char *str, char *charset, size_t *str_index)
{
	size_t	i;
	int		count;
	char	is_word;

	is_word = 'n';
	count = 0;
	i = 0;
	while (str[i])
	{
		is_word == 'y' ? count++ : count;
		if (ft_strchr(charset, str[i]) && !(ft_strchr(charset, str[i + 1]))
		&& str[i + 1] != '\0')
			is_word = 'y';
		else if (ft_strchr(charset, str[i]))
			is_word = 'n';
		else
		{
			(count == 1 && is_word == 'y') ? *str_index = i : 0;
			while (str[i] != '\0' && !(ft_strchr(charset, str[i + 1])))
				i++;
			is_word = 'n';
		}
		i++;
	}
	return (count);
}

size_t		ft_get_length(char *str, char *charset, size_t str_index)
{
	size_t length;

	length = 0;
	while (str[str_index] && !(ft_strchr(charset, str[str_index])))
	{
		str_index++;
		length++;
	}
	return (length);
}

char		**ft_split(char *str, char *charset)
{
	char	**arr;
	size_t	i;
	size_t	arr_length;
	size_t	str_index;
	size_t	str_length;

	str_index = 0;
	arr_length = ft_count_words(str, charset, &str_index);
	if (!(arr = malloc(sizeof(char *) * (arr_length + 1))))
		return (NULL);
	i = -1;
	while (++i < arr_length)
	{
		while (ft_strchr(charset, str[str_index]) && str[str_index] != '\0')
			str_index++;
		str_length = ft_get_length(str, charset, str_index);
		if (!(arr[i] = malloc(sizeof(char) * str_length + 1)))
			return (NULL);
		ft_strlcpy(arr[i], &str[str_index], str_length + 1);
		str_index += str_length;
	}
	if (!(arr[i] = malloc(sizeof(char))))
		return (NULL);
	arr[i] = 0;
	return (arr);
}
