#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        *(dest + i) = src[i];
        i++;
    }

    *(dest + i) = '\0';

    return (dest);
}

int ft_strlen(char *str)
{
    int	i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

int ft_get_length(int size, char **strs, char *sep)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while(i < size)
    {
        result += ft_strlen(strs[i]);
        i++;
    }
    result += (size - 1) * ft_strlen(sep) + 1;

    return (result);
}

char *ft_strcat(char *dest, char *src, char *sep)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0')
        i++;
    while (sep[j] != '\0')
    {
        dest[i] = sep[j];
        i++;
        j++;
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    char *newstr;

    i = 1;
    if (size == 1)
        return *strs;
    if (size == 0)
        {
            newstr = malloc(1);
            return newstr;
        }

    newstr = malloc(ft_get_length(size, strs, sep));
    if (newstr == NULL)
        return (NULL);
    ft_strcpy(newstr, strs[0]);
    while (i < size)
    {
        ft_strcat(newstr, strs[i], sep);
        i++;
    }

    return newstr;
}