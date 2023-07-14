#include <stdio.h>

/**
 * main - print all lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char oneLetter = 'a';

	while (oneLetter <= 'z')
	{
		if (oneLetter != 'e' && oneLetter != 'z')
		{
			putchar(oneLetter);
		}
		oneLetter++;
	}
	putchar('\n');
	return (0);
}
