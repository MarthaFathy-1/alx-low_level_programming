#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: input number
 * Return : no return
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + 48);
		if (i > 97 && i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
