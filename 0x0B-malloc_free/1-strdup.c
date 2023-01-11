#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
char *copy_str;
int index = 0;
int str_len = 0;

if (str == NULL)
return (NULL);

while (*(str + index))
str_len++, index++;

str_len++; /* add null terminator to length */

copy_str = malloc(sizeof(char) * str_len);

if (copy_str == NULL)
return (NULL);

while (index < str_len)
{
*(copy_str + index) = *(str + index);
index++;
}

return (copy_str);
}
