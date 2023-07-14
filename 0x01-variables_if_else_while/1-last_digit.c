#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to the variable n each time it is executed and
 * prints last digit of the number n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	if (lastNum == 0)
		printf("Last digit of %d is %d\n", n, lastNum);
	if (lastNum < 6 && lastNum != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	return (0);
}
