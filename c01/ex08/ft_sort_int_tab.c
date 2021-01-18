/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 09:28:09 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/18 13:24:50 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	char	sorted;
	int		i;
	int		tmp;

	sorted = 'n';
	while (sorted != 'y')
	{
		sorted = 'y';
		i = 0;
		while (i < size)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = tmp;
				sorted = 'n';
			}
			i++;
		}
	}
}
