#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int j = 0;

	while (s[j] != 0)
	{
		j++;
	}
	while (j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
