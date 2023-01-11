#include "main.h"
#include <stdlib.h>

/**
 * strtow - a function that splits a string into words
 * @str: string
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
  int index = 0;
  int i = 0;
  char *charArr;
  
    if (str == NULL || str == "")
    return (NULL);

charArr = malloc(sizeof(char) * index);
 
if (charArr == NULL)
return (NULL);
 
while (str[index] == '\0')
{
if (str[index] == "")
continue;
else
charArr[i]=str[index];
      
str++;
}

chaArr[i] == NULL;

return (charArr);
}
