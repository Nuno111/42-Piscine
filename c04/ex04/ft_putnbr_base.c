#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int	i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

void ft_print_nbr(int nbr, char *string, int length)
{
    if (nbr >= length)
    {
        ft_print_nbr(nbr / length, string, length);
        ft_print_nbr(nbr % length, string, length);
    }
    else
    {
        write(1, &string[nbr], 1);
    }
    
}

int ft_check_usage(char *base, int length)
{
    int i;
    int j;

    i = 0;
    if (length <= 1)
        return (1);
    while (base[i] != '\0')
    {
        j = i + 1;
        if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
            return (1);
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void ft_putnbr_base(int nbr, char *base)
{
    int length;

    length = ft_strlen(base);

    if (ft_check_usage(base, length) == 1)
        return;
    if (nbr < 0)
    {
        nbr = -nbr;
        write(1, "-", 1);
    }

    ft_print_nbr(nbr, base, length);
}