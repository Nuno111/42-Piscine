#include <unistd.h>

int     ft_is_numeric(char letter)
{
    if ((letter >= '0' && letter <= '9'))
    {
        return (1);
    }

    return (0);
}

int ft_ispositive(char *ispositive, char *letter)
{
    int index;
    int count;

    index = 0;
    count = 0;
    while (ft_is_numeric(letter[index]) != 1)
    {
        if (letter[index] == '-')
        {
            count++;
        }
        index++;
    }

    if (count % 2 == 0)
    {
        *ispositive = 'y';
    }
    else
    {
        *ispositive = 'n';
    }

    return (index);
}

int ft_atoi(char *str)
{
    int index;
    char ispositive;
    int result;

    result = 0;
    index = ft_ispositive(&ispositive, str);
    while (ft_is_numeric(str[index]) == 1)
    {
        result = result * 10 + str[index] - '0';
        index++;
    }
    if (ispositive != 'y')
    {
        result = result * -1;
    }
    return (result);
}