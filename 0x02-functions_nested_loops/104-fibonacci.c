#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long long int start = 0;
unsigned long long int nextdigit = 1;
unsigned long long int sum = 0;
unsigned long number = 0;

while (number < 101)
{
sum = start + nextdigit;
printf("%llu", sum);
putchar(',');
putchar(' ');

start = nextdigit;
nextdigit = sum;

number++;
}
putchar('\n');
return (0);
}
