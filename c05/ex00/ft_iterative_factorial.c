#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int i;

    if (nb < 1)
        return (0);

    i = nb;
    while (--i > 0)
        nb *= i;

    return nb;
}