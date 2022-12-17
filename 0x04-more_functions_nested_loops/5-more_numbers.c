#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void data type
 */

void more_numbers(void)
{
int count = 1;
char num;
do {
for (num = 0; num <= 14; num++)
{
if (num / 10 > 0)
_putchar((num / 10) + '0');

_putchar((num % 10) + '0');

}
_putchar('\n');
count++;
} while (count <= 14);

}
