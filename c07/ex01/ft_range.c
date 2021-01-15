#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *arr;
    int length;
    int i;

    if (min >= max)
        return NULL;

    i = 0;
    length = max - min;
    arr = malloc(length * 4);

    if (arr == NULL)
        return NULL;

    while (i < length)
    {
        arr[i] = min;
        min++;
        i++;
    }

    return (arr);
}