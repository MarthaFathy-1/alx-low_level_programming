#include "main.h"
/**
 * _strlen -  function that returns the length of a string
 *
 * @s: pointer to string
 * Return: size of string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		++c;
	}
	return (c);
}
