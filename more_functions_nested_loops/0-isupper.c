#include "main.h"

/**
 * _isupper - Entry point
 * @c: character to be verify
 * Return: 1 (Success) 0 (fail)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);

}
