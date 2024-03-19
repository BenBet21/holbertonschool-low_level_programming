#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of elements
 * @argv: tableau de pointeurs
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	oper = argv[2];
	operation = get_op_func(oper);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*oper == '/' || *oper == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
