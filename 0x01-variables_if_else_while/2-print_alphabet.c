#include <stdio.h>

/**
 * main - entry point
 *
 * Description:a program that prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
char alphabet = 'a';
for (; alphabet <= 'z'; alphabet++)
putchar(alphabet);

putchar('\n');
