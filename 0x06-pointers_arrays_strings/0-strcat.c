#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: pointer to string
 * @src: pointer to string
 * Return : result
 */
char *_strcat(char *dest, char *src)
{
	int k;

	for (k = 0; k <= src[k]; k++)
	{
		if (src[k] != '\0')
		{
			dest = dest + src[k];
		}
	}
	return (*dest);
}
