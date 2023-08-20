#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: input number
 * Return: void
 */
void print_triangle(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			_putchar(' ');
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
