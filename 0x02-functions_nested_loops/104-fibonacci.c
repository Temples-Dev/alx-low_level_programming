#include "main.h"

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

while (number < 98)
{
sum = start + nextdigit;
_putchar('0' + sum);
_putchar(',');
_putchar(' ');
       
start = nextdigit;
nextdigit = sum;

number++;
}
return (0);
}
