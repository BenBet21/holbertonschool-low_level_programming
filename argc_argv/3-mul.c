#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int a = 0;
	int b = 0;
	int i;
	int resultat;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	for (i = 1 ; i < argc - 1 ; i++)
	{
	a = atoi(argv[i]);
	b = atoi(argv[i + 1]);
	resultat = a * b;

	printf("%d\n", resultat);
	}
	return (0);
}

