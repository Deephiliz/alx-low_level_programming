#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = print_last_digit(98);
_putchar('\n');
_putchar(r + '0');
r = print_last_digit(0);
_putchar('\n');
_putchar(r + '0');
r = print_last_digit(-98);
_putchar('\n');
_putchar(r + '0');
_putchar('\n');
return (0);
}
