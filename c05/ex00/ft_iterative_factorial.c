int ft_iterative_factorial(int nb)
{
    int i;

	if (nb == 0)
		return (1);
    if (nb < 0)
        return (0);
    i = nb;
    while (--i > 0)
        nb *= i;

    return nb;
}
