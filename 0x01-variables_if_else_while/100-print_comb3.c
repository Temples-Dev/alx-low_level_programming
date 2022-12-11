#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int zeroTo9;

for (zeroTo9 = 0; zeroTo9 < 10; zeroTo9++)
{
int addOne = zeroTo9 + 1;
for (; addOne < 10; addOne++)
{
putchar(zeroTo9 + '0');
putchar(addOne + '0');
if (zeroTo9 != 8 || addOne != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
