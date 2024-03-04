#include "main.h"
#include <stdio.h>
/**
 * *_strspn - check the code
 * @s: variable
 * @accept: variable
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, j, k;
	unsigned int so = 0;

	k = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
			}
		}
		if (k >= 1)
		{
			so = so + 1;
			k = 0;
			continue;
		}
		if (k == 0 && so > 0)
		{
			break;
		}
	}
		return (so);

}
