#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;

while (dest[j] != '\0')
{
j++;
}

while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
dest[j + i] = '\0';

return (dest);

}
