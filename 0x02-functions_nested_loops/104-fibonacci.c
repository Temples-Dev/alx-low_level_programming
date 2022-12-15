#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long start = 0;
unsigned long nextdigit = 1;
unsigned long sum = 0;
unsigned long number = 0;

while (number < 99)
{
sum = start + nextdigit;
printf("%lu", sum);
putchar(',');
putchar(' ');

start = nextdigit;
nextdigit = sum;

number++;
}
putchar('\n');
return (0);
}
