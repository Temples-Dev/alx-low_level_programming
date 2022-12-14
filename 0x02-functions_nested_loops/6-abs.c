#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 *
 * @int: ASCII character
 *
 * Return: int data type
 */

int _abs(int)
{
int r;
if (r < 0)
{
int abs = r * -1;
_putchar(abs);
}
else
{
_putchar(r);
}
return (0);
}
