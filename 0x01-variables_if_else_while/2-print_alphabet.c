#include <stdio.h>

/**
 * main - displays alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = "a";
	while (alpha <= "z")
	{
		putchar(alpha);
		alpha++;
	}
	putchar("\n");
	return (0);
}	
