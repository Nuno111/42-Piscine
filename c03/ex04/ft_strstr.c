#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[j])
        {
            while (str[i + j] == to_find[j] && to_find[j] != '\0')
            {
                j++;
            }
            if (to_find[j] == '\0')
            {
                write(1, "a", 1);
                return (&str[i]);
            }
            else
            {
                j = 0;
            }
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char a[] = "Hello";
    char b[] = "ell";

    ft_strstr(&a[0], &b[0]);
}