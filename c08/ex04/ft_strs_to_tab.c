/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:51:53 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/29 00:00:47 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

size_t				ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t				ft_strlcpy(char *dst, const char *src, size_t size)
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

struct s_stock_str	*ft_allocate_memory(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	i = 0;
	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].str = malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		tab[i].copy = malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		if (!tab[i].str || !tab[i].copy)
			return (NULL);
		i++;
	}
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = ft_allocate_memory(ac, av);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]) + 1;
		ft_strlcpy(tab[i].str, av[i], tab[i].size);
		ft_strlcpy(tab[i].copy, av[i], tab[i].size);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = NULL;
	tab[i].copy = NULL;
	return (tab);
}
