#include <stdio.h>

/**
 * main - print different combinations of two digits seperated by , and spac
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstNum = 48;

	int secNum = 49;

	int checker = 0;

	while (firstNum < 57)
	{
		while (secNum < 58)
		{
			putchar(firstNum);
			putchar(secNum);
			if (checker != 8)
			{
				putchar(44);
				putchar(32);
			}
			secNum++;
		}
		if (secNum >= 58)
		{
			checker++;
			secNum = 49 + checker;
		}
		firstNum++;
	}
	putchar('\n');
	return (0);
}
