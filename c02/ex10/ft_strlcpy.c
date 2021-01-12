#include <unistd.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    if (size == 0)
    {
        while (src[i] != '\0')
        {
            i++;
        }
        return (i);
    }
    else
    {
        while (i < size - 1 && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i + 1] = '\0';
    }
    while(src[i])
    {
        i++;
    }

    return (i);
}