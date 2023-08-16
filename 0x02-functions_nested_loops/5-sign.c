#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * @n : value of number
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if ( n == 0)
	{
	       	_putchar('0');
                _putchar(',');
                _putchar(' ');
                return (0);
	}
	else
	{
		_putchar('-');
                _putchar(',');
                _putchar(' ');
                return (-1);
	}
}
