#include "main.h"
/**
 * print_number - prints number
 * @n:integer to convert to character
 *
 */

void print_number(int n)
{
unsigned int absolute_value;
int digit_count;
int i;
int divisor;

if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
absolute_value = n;
digit_count = 0;
while (absolute_value > 0)
{
absolute_value /= 10;
digit_count++;
}
absolute_value = n;
divisor = 1;
for (i = 1; i < digit_count; i++)
{
divisor *= 10;
}
for (i = 0; i < digit_count; i++)
{
_putchar((absolute_value / divisor) +'0');
absolute_value %= divisor;
divisor /= 10;
}
}

