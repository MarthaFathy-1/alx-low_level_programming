#include "main.h"
/**
 * _isdigit - function that checks for a digit
 *
 * @c: input number
 * Return: 1 if success 0 if fail
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
