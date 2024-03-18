#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * op_add - entry point
 * @a: variable
 * @b: variable
 * Description: this function adds a and b
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - entry point
 * @a: variable
 * @b: variable
 * Description: this function subs a and b
 * Return: sub of a & b
 */

int op_sub(int a, int b)
{
	int sub = 0;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - entry point
 * @a: variable
 * @b: variable
 * Description: this function multiplicates a and b
 * Return: multiplication of a & b
 */

int op_mul(int a, int b)
{
	int mul = 0;

	mul = a * b;
	return (mul);
}

/**
 * op_div - entry point
 * @a: variable
 * @b: variable
 * Description: this function divided a and b
 * Return:  division of a & b
 */

int op_div(int a, int b)
{
	int div = 0;

	div = a / b;
	return (div);
}
/**
 * op_mod - entry point
 * @a: variable
 * @b: variable
 * Description: this function remainded a and b
 * Return:  remainds of a & b
 */

	int op_mod(int a, int b)
	{
		int mod = 0;

		mod = a % b;
		return (mod);
	}
