/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:29:28 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/20 17:37:25 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_print_args(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_bubble_sort(int argc, char *argv[])
{
	char	sorted;
	int		i;
	char	*tmp;

	sorted = 'n';
	while (sorted != 'y')
	{
		sorted = 'y';
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				sorted = 'n';
			}
			i++;
		}
	}
	ft_print_args(argc, argv);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		write(1, "\n", 1);
	}
	else if (argc > 2)
		ft_bubble_sort(argc, argv);
	return (0);
}
