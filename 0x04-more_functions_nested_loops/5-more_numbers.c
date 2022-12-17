#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0 to 14 ten times
 *
 * @num: input from var i
 *
 * Return: void data type
 */
void print_two_digits(char num);

void more_numbers(void)
{
char i;
int counter;

for (counter = 1; counter <= 10; counter++)
{
for (i = 0; i <= 14; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
print_two_digits(i);
}
}
_putchar('\n');
}
}

/**
 * print_two_digits - splits 10-14 and print
 *
 * @num: input from var i
 */

void print_two_digits(char num)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
}
