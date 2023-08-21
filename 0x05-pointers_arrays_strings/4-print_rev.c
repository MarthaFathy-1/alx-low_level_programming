#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int n;

	for (n = s[n]; n > 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
