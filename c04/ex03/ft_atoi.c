/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:56:20 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/19 20:15:29 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_white_space(char *letter)
{
	int i;

	i = 0;
	while ((letter[i] >= 9 && letter[i] <= 13) || letter[i] == 32)
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	i = ft_is_white_space(str);
	result = 0;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		else
			return (result * sign);
	}
	return (result * sign);
}
