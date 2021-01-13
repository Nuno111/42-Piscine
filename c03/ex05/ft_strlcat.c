#include <unistd.h>

unsigned int		ft_strlen(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;

    if (str[i] != '\0')
    {
        return (size);
    }

	return (i);
}

unsigned int  ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0' && i < size)
    {
        i++;
    }
    while (src[j] != '\0' && j + i <= size)
    {
        dest[i + j] = src[j];
        j++;
    }
    if (i + j < size)
    {
        dest[i + j] = '\0';
    }

    return (i + ft_strlen(src, size));
}