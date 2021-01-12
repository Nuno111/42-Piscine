#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp[size];

    i = 0;
    while(i < size)
    {
        temp[i] = tab[i];
        i++;
    }

    while (i > 0)
    {
        *(tab + i - 1) = temp[size - i];
        i--;
    }
}