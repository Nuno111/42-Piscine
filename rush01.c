#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_fill_array(char array[4][4], char *argv[])
{
    int i;
    int j;
    int count;

    i = 0;
    count = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            if (argv[1][count] >= '1' && argv[1][count] <= '4')
            {
                array[i][j] = argv[1][count];
                j++;
            }
            count++;
        }
        i++;
    }
    if (count == 16)
            return (1);

    return (0);
}

int     main(int argc, char *argv[])
{
    char array[4][4];

    if (argc != 2)
    {
        write(1, "Error\n", 7);
        return (0);
    }

    if (ft_fill_array(array, argv) == 0)
    {
        write(1, "Error\n", 7);
        return (0);
    }
}