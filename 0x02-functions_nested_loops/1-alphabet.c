#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: void type
 */

void print_alphabet(void)
{
char alphabet = 'a';

for (; alphabet <= 'z'; alphabet++)
_putchar(alphabet);

_putchar('\n');
return;
}
