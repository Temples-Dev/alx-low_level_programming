#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function pointer that returns void
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
