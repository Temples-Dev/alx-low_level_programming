#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: an ASCII character
 *
 * Return: int data type
 */

int _isalpha(int c)
{

if (c >= 'a' || c <= 'Z')
return (1);
else
return (0);

_putchar('\n');
}
