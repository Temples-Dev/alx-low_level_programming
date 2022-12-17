#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 *
 * @n: integer n
 */

void print_number(int n)
{
unsigned int num = n;
if (num == 0)
{
_putchar('0');
}
else
{
if (num < 0)
{
_putchar('-');
num = -num;
}

unsigned int divisor = 1;
while (n / divisor >= 10)
{
divisor *= 10;
}

while (divisor >= 1)
{
unsigned int digit = num / divisor;
_putchar(digit + '0');
num = num % divisor;
divisor /= 10;
}
}
}
