#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 *
 * @s: pointer to char
 * @c: char
 * Return: '\0'
 */
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}
	return ('\0');
}
