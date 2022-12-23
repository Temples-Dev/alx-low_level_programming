#include "main.h"
/**
 * rot13 - encrypts code
 * @s: string to encrypt
 * Return: char value
 */

char *rot13(char *s)
{
char mapping_from[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char mapping_to[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

int index;
int mapping_index = 0;

for (index = 0; s[index] != '\0'; index++)
{
for (mapping_index = 0; mapping_from[mapping_index] != '\0'; mapping_index++)
{
if (s[index] == mapping_from[mapping_index])
{
s[index] = mapping_to[mapping_index];
break;
}
}
}
return (s);
}
