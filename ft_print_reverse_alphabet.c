/*Create a function that displays the alphabet in lowercase, on a single line, by
descending order, starting from the letter ’z’.
*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char c;

    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c);
        c--;
    }
    ft_putchar('\n');
}