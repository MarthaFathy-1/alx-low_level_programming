#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character
 *
 * @c: input number
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
