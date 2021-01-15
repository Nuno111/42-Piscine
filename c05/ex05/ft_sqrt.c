#include <unistd.h>

int ft_sqrt(int nb)
{
    float divisor;

    divisor = 1;
    while (divisor <= nb)
    {
        if (divisor == nb / divisor)
            return (divisor);
        divisor++;
    }

    return (0);
}