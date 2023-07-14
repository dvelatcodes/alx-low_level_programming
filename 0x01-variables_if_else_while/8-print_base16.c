#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums = 48;

	char letss = 'a';

	while (letss <= 'f')
	{
		while (nums < 58)
		{
			putchar(nums);
			nums++;
		}
		if (nums >= 58)
		{
			putchar(letss);
			letss++;
		}
	}
	putchar('\n');
	return (0);
}
