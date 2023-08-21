#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: pointer to string
 * Return: void
 */
void _puts(char *str)
{
	int n;

	for (n = 0; n < str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
