/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:52:55 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/20 10:42:54 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_validate_input(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_is_white_space(char *letter)
{
	int i;

	i = 0;
	while ((letter[i] >= 9 && letter[i] <= 13) || letter[i] == 32)
		i++;
	return (i);
}

int		ft_get_index(char c, char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (c == str[index])
			return (index);
		index++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int result;
	int sign;
	int index;

	if (!ft_validate_input(base))
		return (0);
	i = ft_is_white_space(str);
	result = 0;
	sign = 1;
	index = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] != '\0')
	{
		index = ft_get_index(str[i++], base);
		if (index != -1)
			result = result * ft_strlen(base) + index;
		else
			return (result * sign);
	}
	return (result * sign);
}
