#include "main.h"

/**
 * find_first_digit_index - find the index where the first
 * digit is found in string
 *
 * @s: string to search
 *
 * Return: integer index where first digit is found,
 * or -1 if no digits found
 */
int find_first_digit_index(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
return (i);
}
}
return (-1);
}


/**
 * find_sign - determine if integer is negative
 * @s: integer
 * Return: integer 1 or -1
 */
int find_sign(char *s)
{
int num_negatives = 0, i;
for (i = 0; i < find_first_digit_index(s); i++)
{
if (s[i] == '-')
{
num_negatives++;
}
}
return (num_negatives % 2 == 0 ? 1 : -1);
}



/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
int digit_index = find_first_digit_index(s);
if (digit_index < 0)
{
return (0);
}

int sign = find_sign(s);
unsigned int num = 0, i;
for (i = digit_index; s[i] >= '0' && s[i] <= '9'; i++)
{
num = num * 10 + (s[i] - '0');
}
return (num * sign);
}
