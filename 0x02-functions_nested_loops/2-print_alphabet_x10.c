#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: void type
 */

void print_alphabet_x10(void)
{
int alphaCount = 0;

while (alphaCount <= 10)
{
char alpha = 'a';

for (; alpha <= 'z'; alpha++)
_putchar(alpha);

_putchar('\n');

}

return;
}
