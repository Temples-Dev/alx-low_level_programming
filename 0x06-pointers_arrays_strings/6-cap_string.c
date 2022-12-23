#include "main.h"
/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */

char *cap_string(char *s)
{
char special_chars[] = {'\n', '\t', ' ', '.', ',', ';',
',', '!', '?', '(', ')', '{', '}'};
int i, j;

if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;

for (i = 1; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
for (j = 0; j < 13; j++)
{
if (special_chars[j] == s[i - 1])
break;
}
if (j == 13)
s[i] -= 32;
}
}

return (s);
}
