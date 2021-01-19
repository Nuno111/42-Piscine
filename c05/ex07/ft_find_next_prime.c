int ft_is_prime(int nb)
{
    int divisor;

    if (nb <= 1)
        return 0;
    divisor = 2;
    while (divisor <= nb / 2)
    {
        if (nb % divisor == 0)
            return (0);
        divisor++;
    }

    return (1);
}

int ft_find_next_prime(int nb)
{
    int i;

    i = 0;
    while ((ft_is_prime(nb + i)) != 1)
        i++;
    
    return (nb + i);
}
int main(void)
{
	int nb;
	int result;
	for (nb = 0; nb < 222002; nb++) {
	result = ft_find_next_prime(nb);
	printf("Next prime of %d, is %d\n", nb, result);
	}
}
