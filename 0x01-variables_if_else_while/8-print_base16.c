#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
char alphabet;
char number;
for (number = 0; number < 10; number++)
putchar(number + '0');

for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
putchar(alphabet);

putchar('\n');
return (0);
}
