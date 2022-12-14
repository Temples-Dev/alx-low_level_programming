#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{

char character[8] = "_putchar";
int charposition;

for (charposition = 0; charposition <= 8; charposition++)
_putchar(character[charposition]);

_putchar('\n');

return (0);

}
