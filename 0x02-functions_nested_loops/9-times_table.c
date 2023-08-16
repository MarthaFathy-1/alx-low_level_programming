#include "main.h"
/**
 * times_table - function that prints the 9 times table
 *
 * Return: no value
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
			if (i + j != 18)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
