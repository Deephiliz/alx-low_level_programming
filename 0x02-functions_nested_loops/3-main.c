#include "main.h"
#include <unistd.h>

/**
 * main - check the code for lowercase character
 *
 * Return: Always 0.
 */
int main(void)
{
char c;
c = 'a';
if (_islower(c))
_putchar(c);
c = 'A';
if (_islower(c))
_putchar(c);
_putchar('\n');
return (0);
}
