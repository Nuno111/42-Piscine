int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);

    if (power == 1)
        return (nb);
    else
        return (ft_recursive_power(nb, power - 1) * nb);
}
