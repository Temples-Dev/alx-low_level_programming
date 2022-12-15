#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long long start = 0;
unsigned long long nextdigit = 1;
unsigned long long sum = 0;
unsigned long number = 0;

while (number < 98)
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
