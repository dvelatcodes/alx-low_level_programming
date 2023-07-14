#include <stdio.h>

/**
 * main - print upper and lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower, upper;

	lower = 'a';
	upper = 'A';

	while (upper <= 'Z')
	{
		while (lower <= 'z')
		{
			putchar(lower);
			lower++;
		}
		if (lower >= 'z')
		{
			putchar(upper);
			upper++;
		}
	}
	putchar('\n');
	return (0);
}
