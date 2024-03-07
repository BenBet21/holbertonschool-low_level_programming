#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i;
	int j;
	int resultat = 0;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1 ; i < argc ; i++)
	{
		resultat += atoi(argv[i]);
	}
	printf("%d\n", resultat);
	return (0);
}

