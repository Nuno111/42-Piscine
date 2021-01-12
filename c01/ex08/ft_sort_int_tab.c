#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    char sorted;
    int i;
    int tmp;

    while (sorted != 'y')
    {
        sorted = 'y';
        i = 0;
        while (i < size)
        {
            if (*(tab + i) > *(tab + i + 1))
            {
                tmp = *(tab + i);
                *(tab + i) = *(tab + i + 1);
                *(tab + i + 1) = tmp;
                sorted = 'n';
            }
            i++;
        }
    }
}