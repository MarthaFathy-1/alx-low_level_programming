#include "main.h"
/**
 * _strlen -  function that returns the length of a string
 *
 * @s: pointer to string
 * Return: size of string
 */
int _strlen(char *s)
{
	int i, size = 0;

	for (i = 0; i < s[i]; i++)
	{
		size += 1;
	}
	return (size);
}
