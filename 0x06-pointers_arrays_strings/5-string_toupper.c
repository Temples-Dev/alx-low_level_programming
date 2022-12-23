#include "main.h"
/**
 * string_toupper - uppers a lower
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s)
{
int index;

for (index = 0; s[index] != '\0'; index++)
if (s[index] >= 'a' && s[index] <= 'z')
s[index] = s[index] - 32;

return (s);
}
