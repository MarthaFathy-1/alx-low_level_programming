#include "main.h"
/**
 * print_square - function that prints a square
 *
 * @size: number of #
 * Return: void
 */
void print_square(int size)
{
	int s, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
