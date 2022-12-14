#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 *
 * @c: is the character to be printed
 *
 * Return: Always 1 (standard output)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
