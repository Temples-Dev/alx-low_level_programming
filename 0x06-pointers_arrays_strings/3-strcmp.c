#include "main.h"
/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */

int _strcmp(char *s1, char *s2)
{
for (int i = 0; s1[i] - s2[i] == 0 && s1[i] != '\0'; i++)
{
/* do nothing here*/
}
return (s1[i] - s2[i]);
}

