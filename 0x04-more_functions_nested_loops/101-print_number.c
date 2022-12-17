#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 *
 * @n: integer n
 */

void print_number(int n)
{
if (n == 0)
{
_putchar('0');
}
else
{
if (n < 0)
{
_putchar('-');
n = -n;
}

int divisor = 1;
while (n / divisor >= 10)
{
divisor *= 10;
}

while (divisor >= 1)
{
int digit = n / divisor;
_putchar(digit + '0');
n = n % divisor;
divisor /= 10;
}
}
}
