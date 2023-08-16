#include "main.h"
#include <stdio.h>
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
			printf("%d", i*j);
			if (i = 9 && j <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			printf("\n");
		}
		_putchar('\n');
	}
}
