#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';

	for (a = 'a' ; a <= 'z' ; a++)
	{
	if (a == 'e')
	{
	continue;
	}
	if (a == 'q')
	{
	continue;
	}
	putchar (a);
	}
	putchar ('\n');
	return (0);
}
