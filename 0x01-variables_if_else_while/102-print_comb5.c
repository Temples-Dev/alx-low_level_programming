#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0;
 */


int main(void)
{
int one;
int two;
int three;
int four;

for (one = 0; one < 10; one++)
{
for (two = 0; two < 10; two++)
{
for (three = one; three < 10; three++)
{
for(four = two + 1; four < 10; four++)
{
putchar(one + '0');
putchar(two + '0');
putchar(' ');
putchar(three + '0');
putchar(four + '0');

if (!((one == 9 && two == 8) && (three == 9 && four == 9)))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
} 
