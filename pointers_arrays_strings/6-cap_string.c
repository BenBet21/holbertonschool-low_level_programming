#include "main.h"
#include <stdio.h>

/**
 * *cap_string - entry point
 * @str: variable
 * Return: 0
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char separateurs[50] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\0'};

	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	while (str[i])
	{
		while (separateurs[j])
		{
			if (str[i] == separateurs[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}
	return (str);
}
