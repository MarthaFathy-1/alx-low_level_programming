#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *
 * @k : input number
 * Return: absolute value
 */
int _abs(int k)
{
	if (k < 0)
	{
		return (k * -1);
	}
	else
	{
		return (k);
	}
}
