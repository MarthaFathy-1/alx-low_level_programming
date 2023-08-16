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
		_putchar('43');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if ( n == 0)
	{
	       	_putchar('48');
                _putchar(',');
                _putchar(' ');
                return (0);
	}
	else
	{
		_putchar('45');
                _putchar(',');
                _putchar(' ');
                return (-1);
	}
}
