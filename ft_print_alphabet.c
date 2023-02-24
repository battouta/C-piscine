/* Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’.*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
    ft_putchar('\n');
}