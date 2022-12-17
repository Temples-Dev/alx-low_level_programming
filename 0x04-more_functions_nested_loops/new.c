#include <stdio.h>

void print_number(int n)
{
  if (n == 0)
    {
      putchar('0');
    }
  else
    {
      if (n < 0)
	{
	  putchar('-');
	  n = -n;
	}

      int divisor = 1;
      while (n / divisor >= 10)
	{
	  divisor *= 10;
	}

      while (divisor >= 1)
	{
	  int digit = n / divisor;
	  putchar(digit + '0');
	  n = n % divisor;
	  divisor /= 10;
	}
    }
}

int main()
{
  print_number(98);
 putchar('\n');
  print_number(402);
 putchar('\n');
  print_number(1024);
 putchar('\n');
  print_number(0);
 putchar('\n');
  print_number(-98);
 putchar('\n');
  return (0);
}
