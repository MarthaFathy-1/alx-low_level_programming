#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to string
 * @src: pointer to string
 * @n: a number
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
