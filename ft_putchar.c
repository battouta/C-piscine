// Write a function that displays the character passed as a parameter.

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}