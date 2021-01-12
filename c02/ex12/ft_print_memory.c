#include <unistd.h>

void print_line(void *addr, unsigned int size)
{
    int i;

    i = 0;
    while (&addr[i])
    {
        write(1, &addr[i], 1);
        i++;
    }
}
void *ft_print_memory(void *addr, unsigned int size)
{
    print_line(addr, size);
}

int main(void)
{
    char a[] = "hello this iss";

    ft_print_memory(&a, 16);
}