#include "main.h"
/**
 * print_diagonal -  function that draws a diagonal line
 *
 * @n: number of rows
 * Return: void
 */
void print_diagonal(int n)
{
	int r, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (c = 1; c <= n; c++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}