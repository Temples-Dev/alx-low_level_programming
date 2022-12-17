#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void data type
 */

void more_numbers(void)
{
char i;
int counter;

for (counter = 1; counter <= 10; counter++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
}

