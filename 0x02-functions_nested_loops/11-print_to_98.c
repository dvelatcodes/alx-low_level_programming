#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from input to 98
 * @n: inputed number
 */
void print_to_98(int n)
{
	int check1 = 0, check2 = 0, check3 = 0;


	if (n > 98 && check2 == 0 && check3 == 0)
	{
		while (n >= 98)
		{
			if (n > 98)
				printf("%d, ", n);
			if (n == 98)
				printf("%d", n);
			n--;
			if (n == 97)
			check1 = 1;
		}
		printf("\n");
	}
	if (n < 98 && check1 == 0 && check3 == 0)
	{
		while (n <= 98)
		{
			if (n < 98)
				printf("%d, ", n);
			if (n == 98)
				printf("%d", n);
			n++;
			if (n == 99)
				check2 = 1;
		}
		printf("\n");
	}
	if (n == 98 && check1 == 0 && check2 == 0)
	{
		printf("%d", n);
		check3 = 1;
		printf("\n");
	}
}
