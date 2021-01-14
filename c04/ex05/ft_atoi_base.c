#include <unistd.h>

int	ft_get_index(char c, char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (c == str[index])
			return (index);
		index++;
	}
	return (-1);
}

int ft_strlen(char *str)
{
    int	i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

int ft_ispositive(char *ispositive, char *letter, char *base)
{
    int index;
    int count;

    index = 0;
    count = 0;
    while (ft_get_index(letter[index], base) == -1)
    {
        if (letter[index] == '-')
            count++;
        index++;
    }
    if (count % 2 == 0)
        *ispositive = 'y';
    else
        *ispositive = 'n';

    return (index);
}

int ft_validate_input(char *base, int length)
{
    int i;
    int j;

    i = 0;
    if (length <= 1)
        return (1);
    while (base[i] != '\0')
    {
        j = i + 1;
        if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
            return (1);
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int ft_atoi_base(char *str, char *base)
{
    int index;
    char ispositive;
    int result;
    int length;

    length = ft_strlen(base);
    result = 0;
    index = ft_ispositive(&ispositive, str, base);
    if (ft_validate_input(base, length) == 1)
        return (0);
    while (ft_get_index(str[index], base) != -1)
    {
        result = result * length + ft_get_index(str[index], base);
        index++;
    }
    if (ispositive != 'y')
        result = result * -1;
    return (result);
}