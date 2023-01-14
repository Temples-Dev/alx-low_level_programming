#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory block
 *     to fill
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}

/**
 * _calloc - function that allocates memory
 *           for an array using memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);

return (ptr);
}


/**
 * multiply - initialize array with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
 */

void multiply(char *s1, char *s2)
{
int i, length1, length2, total_length,
first_digit, second_digit, carry = 0, tmp;

char *result;
void *temp;

length1 = _length(s1);
length2 = _length(s2);
tmp = length2;
total_length = length1 + length2;
result = _calloc(sizeof(int), total_length);

temp = result;

for (length1--; length1 >= 0; length1--)
{
first_digit = s1[length1] - '0';
carry = 0;
length2 = tmp;
for (length2--; length2 >= 0; length2--)
{
second_digit = s2[length2] - '0';
carry += result[length2 + length1 + 1] + (first_digit *second_digit);
result[length1 + length2 + 1] = carry % 10;
carry /= 10;
}
if (carry)
result[length1 + length2 + 1] = carry % 10;
}

while (*result == 0)
{
result++;
total_length--;
}

for (i = 0; i < total_length; i++)
printf("%i", result[i]);
printf("\n");
free(temp);
}


/**
 * main - Entry point
 *
 * Description: a program that multiplies
 *            two positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success 98 on faliure
 */

int main(int argc, char *argv[])
{
char *n1 = argv[1];
char *n2 = argv[2];

if (argc != 3 || check_number(n1) || check_number(n2))
error_exit();

if (*n1 == '0' || *n2 == '0')
{
_putchar('0');
_putchar('\n');
}
else
multiply(n1, n2);
return (0);
}
