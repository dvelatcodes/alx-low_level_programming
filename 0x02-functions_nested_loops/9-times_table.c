#include "main.h"

/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		_putchar('0');

		for (num2 = 0; num2 < 10; num2++)
		{
			_putchar(',');
			_putchar(' ');

			num3 = num2 * num1;
			if (num3 <= 9)
				_putchar(' ');
			else
				_putchar((num3 / 10) + '0');

			_putchar((num3 % 10) + '0');
		}
	}
	_putchar('\n');
}
