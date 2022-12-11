#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int firstdigit;
int secondigit;
int thirdigit;

for (firstdigit = 0; firstdigit < 10; firstdigit++)
{
secondigit = firstdigit + 1;
for (; secondigit < 10; secondigit++)
{
thirdigit = secondigit + 1;

for (; thirdigit < 10; thirdigit++)
{
putchar(firstdigit + '0');
putchar(secondigit + '0');
putchar(thirdigit + '0');

if (firstdigit != 7 || secondigit != 8 || thirdigit != 9)
{
putchar(',');
putchar(' ');
}

}

}

}

putchar('\n');
return (0);
}
