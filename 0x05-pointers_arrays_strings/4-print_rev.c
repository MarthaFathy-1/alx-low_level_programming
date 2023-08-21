#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int j;

	for (j = s[j]; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
