#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer argument
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);

			n = n + 1;
		}


	}
	else if (y > 98)
	{
		while (y >= 98)
		{
			if (y == 98)
				printf("%d\n", y);
			else
				printf("%d, ", y);
			n = n - 1;
		}
	}
}
