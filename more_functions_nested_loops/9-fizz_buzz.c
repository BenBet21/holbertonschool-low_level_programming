#include "stdio.h"
#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1 ; x <= 100 ; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FIZZBUZZ ");
		else if (x % 3 == 0)
			printf("FIZZ ");
		else if (x % 5 == 0)
			printf("BUZZ ");
		else
		{
			printf("%d ", x);
		}
	}
	printf(" \n");
	return (0);
}

