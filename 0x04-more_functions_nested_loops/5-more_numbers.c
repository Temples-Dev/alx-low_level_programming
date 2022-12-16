#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void data type
 */

void more_numbers(void)
{
int count = 1;
int num;
do {
for (num = 0; num <= 14; num++)
{
_putchar('0' + num);
}
_putchar('\n');
count++;
} while (count <= 14);

_putchar('\n');
}
