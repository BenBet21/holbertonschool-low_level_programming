#include "main.h"

/**
 * _isdigit - Entry point
 * @c: character to be verify
 * Return: 1 (Success) 0 (fail)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);

}
