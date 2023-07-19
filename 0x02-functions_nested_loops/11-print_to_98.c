#include "main.h"

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
			_putchar(n + 48);
			_putchar(44);
			_putchar(32);
			n--;
			if (n == 97)
			check1 = 1;
		}
	}
	if (n < 98 && check1 == 0 && check3 == 0)
	{
		while (n <= 98)
		{
			_putchar(n + 48);
			_putchar(44);
			_putchar(32);
			n++;
			if (n == 99)
			check2 = 1;
		}
	}
	if (n == 98 && check1 == 0 && check2 == 0)
	{
		_putchar(n + 48);
		check3 = 1;
	}
	_putchar('\n');
}
