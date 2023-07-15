#include <stdio.h>

/**
 * main - print different combinations of 3 digits seperated by , and spac
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstNum = 48;
	int secNum = 49;
	int lastNum = 50;
	int checker = 0;
	int checker2 = 0;

	while (firstNum < 56)
	{
		while (secNum < 57)
		{
			while (lastNum < 58)
			{
				putchar(firstNum);
				putchar(secNum);
				putchar(lastNum);
				if (checker2 != 7)
				{
					putchar(44);
					putchar(32);
				}
				lastNum++;
			}
			if (lastNum >= 58)
			{
				checker++;
				lastNum = 50 + checker;
			}
			secNum++;
		}
		if (secNum >= 57)
		{
			checker2++;
			checker = 0 + checker2;
			secNum = 49 + checker2;
			lastNum = 50 + checker2;
		}
		firstNum++;
	}
	putchar('\n');
	return (0);
}
