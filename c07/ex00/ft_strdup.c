#include <stdlib.h>

unsigned int		ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

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

char *ft_strdup(char *src)
{
    char *newstr;

    newstr = malloc(ft_strlen(src));

    if (newstr == NULL)
        return (NULL);

    ft_strcpy(newstr, src);

    return (newstr);
}
