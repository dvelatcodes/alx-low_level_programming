#include <stdio.h>

/**
 * main - print all lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
