#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int length;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    i = 0;
    length = max - min;
    *range = malloc(length * 4);
    if (*range == NULL)
        return (-1);
    while (i < length)
    {
        *range[i] = min;
        min++;
        i++;
    }

    return (length * 4);
}



