#include <unistd.h>

int		ft_get_divisor(int nb)
{
	int i;

	i = 1;
	while ((nb = nb / 10) > 0)
	{
		i *= 10;
	}
	return (i);
}

int		ft_check_negative(int nb)
{
	if (nb < 0)
	{
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char	character;
	int		divisor;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }

	if (ft_check_negative(nb) == 1)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb > 0)
	{
		divisor = ft_get_divisor(nb);
		character = nb / divisor + '0';
		write(1, &character, 1);
		nb = nb % divisor;
	}
}
