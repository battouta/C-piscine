/*
Create a function that displays all different combination of two digits between 00
and 99, listed by ascending order.
*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int a;
    int b;
    int c;
    int d;
a = 0;
    while (a <= 9)
    {
        b = 0;
        while (b <= 8)
        {
            c = 0;
            while (c <= 9)
            {
                d = 1;
                while (d <= 9)
                {
                    ft_putchar(a + 48);
                    ft_putchar(b + 48);
                    ft_putchar(' ');
                    ft_putchar(c + 48);
                    ft_putchar(d + 48);
                    if (a < 9 || b < 8 || c < 9 || d < 9)
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                    d++;
                }
                c++;
            }
              b++;
        }
        a++;
    }
}