#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
int len_s1, len_s2, total_len, index;
char *concatenated_str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len_s1 = 0;
while (*(s1 + len_s1) != '\0')
{
len_s1++;
}

len_s2 = 0;
while (*(s2 + len_s2) != '\0')
{
len_s2++;
}

total_len = len_s1 + len_s2;

concatenated_str = (char*) malloc(total_len * sizeof(char) + 1);

if (concatenated_str == NULL)
return (NULL);

for (index = 0; index < len_s1; index++)
concatenated_str[index] = s1[index];
for (index = 0; index < len_s2; index++)
concatenated_str[index + len_s1] = s2[index];

return (concatenated_str);
}
