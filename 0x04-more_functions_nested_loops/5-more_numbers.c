#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void data type
 */

void more_numbers(void)
{
int count = 1;
do {
for (int j = 0; j <= 14; j++)
_putchar(j + '0');

_putchar('\n');
count++;
} while (count <= 14);
