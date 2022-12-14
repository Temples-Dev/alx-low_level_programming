#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 *
 * @r: ASCII character
 *
 * Return: int data type
 */

int _abs(int r)
{

if (r < 0)
{
  int rr = r * -1;
_putchar(rr + 48);
}
else
{
_putchar(r);
}
return (0);
}
