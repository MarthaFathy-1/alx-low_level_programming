#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array
 *
 * @a: pointer to integer
 * @n: number of elements will be printed
 * Return : void
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (a[k] != '\0')
		{
			printf("%d, ", a[k]);
		}
	}
}
