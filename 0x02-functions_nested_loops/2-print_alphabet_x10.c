#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int i = 1;

	char alpha = 'a';

	while (i <= 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha = 'a';
		i++;
	}
}
