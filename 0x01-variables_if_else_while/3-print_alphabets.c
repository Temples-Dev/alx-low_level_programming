#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
for (char lower = 'a'; lower <= 'z'; lower++)
putchar(lower);

for (char upper = 'A'; upper <= 'Z'; lower++)
putchar(upper);

putchar("\n");
return (0);
}
