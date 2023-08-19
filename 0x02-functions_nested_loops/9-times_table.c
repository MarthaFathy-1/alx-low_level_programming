#include "main.h"
#include <stdio.h>
/**
 * times_table - function that prints the 9 times table
 *
 * Return: no value
 */
void times_table(void)
{
	int l, m;

	for (l = 0; l <= 9; l++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar(l * m);
			if (m != 9)
			{
				if (l * m / 10 <= 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
