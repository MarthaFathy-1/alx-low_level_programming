#include "main.h"
/**
 * _strcpy - function that copies the string
 *
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');
	return (dest);
}
