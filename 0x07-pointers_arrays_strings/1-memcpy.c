#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
