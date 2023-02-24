// Create a function that displays all digits, on a single line, by ascending order.

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    int c;

    c = 0;
    while (c <= 9)
    {
        ft_putchar(c + 48);
        c++;
    }
    ft_putchar('\n');
}