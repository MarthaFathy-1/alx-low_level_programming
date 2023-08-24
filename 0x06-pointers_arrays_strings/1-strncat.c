#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: pointer to string
 * @src: pointer to string
 * @n: number of bytes
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int r, k;

	r = 0;

	while (dest[r])
	{
		r++;
	}
	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[r + k] = src[k];
	}
	dest[r + k] = '\0';
	return (dest);
}
