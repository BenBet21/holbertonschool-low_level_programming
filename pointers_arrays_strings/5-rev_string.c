#include "main.h"
#include <stdio.h>

/**
 * _len - entry point
 * Return: retourne la longeur
 * @str: character to be verify
*/

int _len(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * rev_string - entry point
 * @s: number to be verify
 *
 */

void rev_string(char *s)

{
	int len = _len(s);
	int i;
	int temp;

	temp = 0;

	for (i = 0 ; i < len / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
