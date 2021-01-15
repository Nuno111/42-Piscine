#include <unistd.h>

int     ft_isalphanumeric(char letter)
{
    if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z') || (letter >= '0' && letter <= '9'))
    {
        return (1);
    }

    return (0);
}

int     ft_islowercase(char letter)
{
    if(letter >= 'a' && letter <= 'z')
    {
        return (1);
    }

    return (0);
}

int     ft_isuppercase(char letter)
{
        if(letter >= 'A' && letter <= 'Z')
    {
        return (1);
    }

    return (0);
}

char    *ft_strcapitalize(char *str)
{
    char isnewword;
    int i;

    isnewword = 'y';
    i = 0;
    while (str[i] != '\0')
    {
        if (isnewword == 'y' && ft_islowercase(str[i]) == 1)
        {
            str[i] -= 32;
            isnewword = 'n';
        }
        else if(ft_isalphanumeric(str[i]) != 1)
            isnewword = 'y';
        else if(ft_isuppercase(str[i]) == 1 && isnewword == 'n')
            str[i] += 32;
        else
            isnewword = 'n';
        i++;
    }

    return (str);
}