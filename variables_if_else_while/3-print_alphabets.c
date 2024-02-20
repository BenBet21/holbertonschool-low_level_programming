#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char a, b;

	a = 'a';
	b = 'A';

	for (a = 'a' ; a <= 'z' ; a++)
	putchar (a);
	for (b = 'A' ; b <= 'Z' ; b++)
	putchar (b);
	putchar ('\n');


	return (0);
}
