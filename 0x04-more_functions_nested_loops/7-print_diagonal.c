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
		for (r = 0; r < n; r++)
		{
			for (c = 0; c < n; c++)
			{
				if (r == c)
				{
					_putchar('\\');
				}
				else if (c < r)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
