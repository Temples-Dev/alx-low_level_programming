/**
 * leet - leet
 * @s: string
 *
 * Return: char value
 */

char *leet(char *s)
{
char leet_chars[] = "A4E3O0T7L1";
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (s[i] == leet_chars[j] || s[i] == leet_chars[j] + 32)
{
s[i] = leet_chars[j + 1];
break;
}
}
}

return (s);
}
