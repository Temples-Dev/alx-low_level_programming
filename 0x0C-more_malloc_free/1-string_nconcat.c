#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length1, length2, index1, index2;
char *result

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

length1 = length2 = 0;

while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

if (n >= length2)
n = length2;

result = (char *) malloc((length1 + n + 1) * sizeof(char));
if (result == NULL)
return (NULL);

for (index1 = 0; s1[index1] != '\0'; index1++)
result[index1] = s1[index1];

for (index2 = 0; index2 < n && s2[index2] != '\0'; index2++)
{
result[index1] = s2[index2];
index1++;
}
result[index1] = '\0';
return (result);
}
