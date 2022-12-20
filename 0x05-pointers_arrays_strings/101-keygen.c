#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
#define NUM_PASSWORDS 5

/**
 * get_random_lowercase_letter - Returns a random lowercase letter
 * Return: lowercase
 */

char get_random_lowercase_letter(void)
{
return ((char)(rand() % 26 + 'a'));
}

/**
 * get_random_uppercase_letter - Returns a random uppercase letter
* Return: uppercase
 */

char get_random_uppercase_letter(void)
{
return ((char)(rand() % 26 + 'A'));
}

/**
 * get_random_digit - Returns a random digit
* Return: random number
 */

char get_random_digit(void)
{
return ((char)(rand() % 10 + '0'));
}

/* Generates a random password of length PASSWORD_LENGTH*/
/* that satisfies the following requirements:*/
/* 1. At least one lowercase letter*/
/* 2. At least one uppercase letter*/
/* 3. At least one digit*/
/* 4. At least one special character*/

/**
 * generate_password - Returns a random password
* Return: password
 */

char *generate_password(void)
{
static char password[PASSWORD_LENGTH + 1];
char i;
for (i = 0; i < PASSWORD_LENGTH; i++)
{
switch (rand() % 4)
{
case 0:
password[i] = get_random_lowercase_letter();
break;
case 1:
password[i] = get_random_uppercase_letter();
break;
case 2:
password[i] = get_random_digit();
break;
case 3:
password[i] = '!'; /*special character*/
break;
}
}
password[PASSWORD_LENGTH] = '\0';
return (password);
}

/**
 * main - entry point for pass generated
 * Return: Always 0;
 */

int main(void)
{
srand(time(NULL)); /*seed the random number generator*/
int i;
for (i = 0; i < NUM_PASSWORDS; i++)
{
printf("%s\n", generate_password());
}
return (0);
}
