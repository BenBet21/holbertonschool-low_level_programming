#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (n > 5)
	{
	printf("last digit of: %d is %d and is greater than 5\n", n, digit);
	}
	if (n == 0)
	{
	printf("last digit of: %d is %d and is 0\n", n, digit);
	}
	if (n < 6 && n != 0)
	{
	printf("last digit of: %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
