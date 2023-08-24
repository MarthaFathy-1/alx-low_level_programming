#include "main.h"
/**
 * _strcmp - function that compares two strings
 *
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			k = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (k);
}
