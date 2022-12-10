#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
char lower;
char upper;
for (lower = 'a'; lower <= 'z'; lower++)
putchar(lower);

for (upper = 'A'; upper <= 'Z'; lower++)
putchar(upper);

putchar("\n");
return (0);
}
