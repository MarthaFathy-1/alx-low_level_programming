#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte
 *
 * @s: pointer
 * @b: char
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; n > 0; m++, n--)
	{
		s[m] = b;
	}
	return (s);
}
