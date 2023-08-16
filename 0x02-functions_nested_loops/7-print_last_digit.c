#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @y : input num
 * Return: last digit
 */
int print_last_digit(int y)
{
	int q;

	q = y % 10;
	if (q < 0)
	{
		_putchar(-q + 48);
		return (-q);
	}
	else
	{
		_putchar(q + 48);
		return (q);
	}
}
