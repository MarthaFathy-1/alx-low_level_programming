#include "main.h"
/**
 * print_line - function that draws a straight line
 *
 * @n: input number
 * Return: void
 */
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
