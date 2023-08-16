#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c : character in ASCII code
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 98 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
