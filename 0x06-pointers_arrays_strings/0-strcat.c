#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to string
 * @src: pointer to string
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int k, l;

	k = 0;

	while (dest[k])
	{
		k++;
	}
	for (l = 0; l <= src[l]; l++)
	{
		dest[k++] = src[l];
	}
	return (dest);
}
