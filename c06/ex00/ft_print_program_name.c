#include <unistd.h>

int     main(int argc, char *argv[])
{
    int i;

    i = 0;
    while (argv[0][i] != '\0')
    {
        write(1, &argv[0][i], 1);
        i++;
    }

    return (0);
}